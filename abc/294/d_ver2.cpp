#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, q, last = 0;
    cin >> n >> q;
    set<int> called;

    rep(i,0,q) {
        int event;
        cin >> event;
        if (event==1) {
            last++;
            called.insert(last);
        }
        else if (event==2) {
            int x;
            cin >> x;
            called.erase(x);
        }
        else {
            cout << *called.begin() << "\n";
        }
    }

    return 0;
}