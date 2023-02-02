#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    const ll mod = 10000000007;
    ll a, b, ans = 1;

    cin >> a >> b;
    for (int i=1; i<b+1; i++) {
        ans = (ans*a) % mod;
    }

    cout << ans << endl;

    return 0;
}