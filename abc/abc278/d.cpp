#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    ll n;
    cin >> n;
    map<int,ll> add;
    int base = 0;

    rep(i, n) {
        int a;
        cin >> a;
        add[i+1] += a;
    }

    int q;
    cin >> q;
    
    rep(qi,q) {
        int t;
        cin >> t;
        if (t==1) {
            int x;
            cin >> x;
            base = x;
            add = map<int, ll>();
        }
        else if (t==2) {
            int x,y;
            cin >> x >> y;
            add[x] += y;
        }
        else {
            int x;
            cin >> x;
            cout << add[x]+base << "\n";
        }
    }
    
    return 0;
}