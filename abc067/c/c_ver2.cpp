#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int solve(ll n, vector<ll> a) {
    //ll snuke = accumulate(a.begin(),a.end(),0);
    ll snuke = 0;
    rep(i,n) {
        snuke += a[i];
    }
    //cout << snuke << " \n";
    ll ans = 1e18, arai = 0, sum = 0;
    rep(i, n-1) {
        arai += a[i];
        snuke -= a[i];
        ans = min(ans,abs(arai - snuke));
    }
    return ans;
}

int main() {

    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];

    cout << solve(n,a) << "\n";

    return 0;
}