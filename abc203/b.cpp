#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, k;
    cin >> n >> k;
    ll ans=0;

    rep(i,n) {
        rep(j,k) ans += (i+1)*100+(j+1);
    }

    cout << ans << "\n";

    return 0;
}