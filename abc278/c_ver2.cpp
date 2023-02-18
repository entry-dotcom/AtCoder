#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, q, t, a, b;
    cin >> n >> q;
    set<pair<int,int>> follows;

    rep(i,q) {
        cin >> t >> a >> b;
        if (t==1) {
            follows.insert({a,b});
            //follows.insert({b,a});
        }
        else if (t==2) {
            follows.erase({a,b});
            //follows.erase({b,a});
        }
        else {
            cout << (follows.count({a,b}) && follows.count({b,a}) ? "Yes":"No") << "\n";
        }
    }

    return 0;
}