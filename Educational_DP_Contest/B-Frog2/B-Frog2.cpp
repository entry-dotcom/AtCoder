#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,s,n) for (int i = s; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, k, ans=0;
    cin >> n >> k;
    vector<int> h(n), dp(n);
 
    rep(i,0,n) cin >> h[i];
    dp[0] = 0;

    rep(i,0,n) {
        int mn;
        for (int j=0; j<k; j++) {
            mn = min(dp[i+j],dp[i]+abs(h[i+j]-h[i]));
        }
        dp[i] = mn;
        
    }

    cout << dp[n-1] << "\n";

    return 0;
}