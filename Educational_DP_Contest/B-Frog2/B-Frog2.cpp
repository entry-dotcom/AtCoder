#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,start,n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;
template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

int main() {

    int n, k;
    cin >> n >> k;
    vector<ll> h(n+100), dp(n+100);
 
    rep(i,0,n) cin >> h[i];
    rep(i,0,n) dp[i] = 1e10;
    dp[0] = 0;

    rep(i,0,n) {
        rep(j,1,k+1) {
            chmin(dp[i+j],dp[i]+abs(h[i]-h[i+j]));
        }
    }

    cout << dp[n-1] << "\n";

    return 0;
}