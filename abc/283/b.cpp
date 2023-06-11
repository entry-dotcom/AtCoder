#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    ll n, q;
    cin >> n;
    vector<ll> a(n);
    rep(i,n) cin >> a[i];
    cin >> q;
    vector<vector<ll> > que(q,vector<ll>(3));

    rep(i,q) {
        ll num, k, x;
        cin >> que[i][0];
        if (que[i][0]==1) {
            cin >> k >> x;
            a[k-1] = x;
        }
        else {
            cin >> k;
            cout << a[k-1] << "\n";
}
    }




    return 0;
}