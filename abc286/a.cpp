#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;
    vector<int> a(n);
    int sa = r - p;

    rep(i,n) cin >> a[i];

    for (int i=p-1; i<q; i++) swap(a[i],a[i+sa]);

    rep(i,n) {
        cout << a[i];
        if (i<n-1) cout << " ";
        else cout << endl;
    }

    return 0;
}