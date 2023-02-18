#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dp1[500009], dp2[500009];
ll a[500009];
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {

    int n;
    cin >> n;
    

    for (int i=1; i<=n; i++) cin >> a[i];

    //配列の初期化
    dp1[0]=0;
    dp2[0]=0;

    //動的計画法
    for (int i=1; i<n+1; i++) {
        dp1[i] = dp2[i-1]+a[i];
        dp2[i] = max(dp1[i-1], dp2[i-1]);
    }

    cout << max(dp1[n], dp2[n]) << endl;

    return 0;   
}