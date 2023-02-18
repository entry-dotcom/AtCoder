#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    ll n, m; ll t;
    cin >> n >> m >> t;
    vector<int> a(n-1);

    rep(i, n-1) cin >> a[i];
    vector<int> b(n);
    //vector<int> b(n);
    rep(i, m) {
        int x, y;
        cin >> x >> y;
        b[x-1] = y;
    }

    rep(i, n-1) {
        t += b[i];
        t -= a[i];
        if (t <= 0) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}