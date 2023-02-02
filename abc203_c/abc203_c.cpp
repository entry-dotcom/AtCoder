#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    ll n, k, ans=0;
    cin >> n >> k;
    vector<ll> a(n), b(n);

    rep(i,n) cin >> a[i] >> b[i];
    ll i=0;
    while(k>0) {
        ans++;
        k--;
        if (a[i]==ans) k += a[i];
        i++;
    }

    cout << ans << "\n";

    return 0;
}