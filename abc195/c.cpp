#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    ll ans = 0, n;
    cin >> n;

    if (n>999) ans += n-999;
    if (n>999999) ans += n-999999;
    if (n>999999999) ans += n-999999999;
    if (n>999999999999) ans += n-999999999999;
    if (n>999999999999999) ans += n-999999999999999;

    cout << ans << "\n";

    return 0;
}