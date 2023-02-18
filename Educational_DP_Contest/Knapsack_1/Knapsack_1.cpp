#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll N, W, w[109], v[109];
ll dp[109][100009];


int main() {
    
    

    //入力
    cin >> N >> W;
    for (int i=1; i<N+1; i++) cin >> w[i] >> v[i];

    //配列の初期化
    dp[0][0]=0;
    for (int i=1; i<W+1; i++) dp[0][i] = -(1ll << 2);

    //動的計画法
    for (int i=1; i<N+1; i++) {
        for (int j=0; j<W+1; j++) {
            // j<W[i]のとき、方法Bは選べない
            if (j<w[i]) dp[i][j]=dp[i-1][j];
            if (j>=w[i]) dp[i][j]=max(dp[i-1][j], dp[i-1][j-w[i]]+v[i]);
        }
    }

    ll ans=0;
    for (int i=0; i<W+1; i++) ans = max(ans, dp[N][i]);
    cout << ans << endl;

    return 0;
}