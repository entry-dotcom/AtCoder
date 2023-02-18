#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    ll a, b, c, d, e, f, mo=998244353, x, y, ans;
    cin >> a >> b >> c >> d >> e >> f;
    x = ((a%mo)*(b%mo)) % mo;
    x = (x*(c%mo))%mo;
    y = ((d%mo)*(e%mo)) % mo;
    y = (y*(f%mo))%mo;

    ans = (x+mo-y) % mo;
    cout << ans << endl;

    return 0;
}