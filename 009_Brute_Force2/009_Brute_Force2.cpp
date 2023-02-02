#include <usr/local/include/bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {

    int n, s;
    cin >> n >> s;
    int a[n];
    bool dp[61][10001];

    for (int i=1; i<s+1; i++) cin >> a[i];

    //配列の初期化
    dp[0][0]=true;
    for (int i=1; i<s+1; i++) dp[0][i]=false;

    //動的計画法
    for (int i=1; i<n+1; i++) {
        for (int j=0; j<s+1; j++) {
            if (j<a[i]) dp[i][j]=dp[i-1][j];
            else {
                if (dp[i-1][j]==true || dp[i-1][j-a[i]]==true) dp[i][j]=true;
                else dp[i][j]=false;
            }

        }
    }

    if (dp[n][s] == true) cout << "Yes" << endl;
	else cout << "No" << endl;
	
    return 0;
}