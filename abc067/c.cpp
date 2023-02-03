#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    ll n, sum_snuke = 0, sum_arai = 0, ans = 1e18;
    cin >> n;
    vector<ll> a(n);

    rep(i,n) {
        cin >> a[i];
        sum_snuke += a[i];
    }
    cout << sum_snuke << "\n";
    
    rep(i,n) {
        sum_arai = sum_snuke - a[i];
        sum_snuke -= a[i];
        ans = min(ans,abs(sum_arai-sum_snuke));
        
    }

    cout << ans << "\n";

    return 0;
}