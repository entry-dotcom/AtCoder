#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, q, last=0;
    cin >> n >> q;
    set<int> call;

    rep(i,0,q) {
        int e;
        cin >> e;
        if (e==1) {
            last++;
            call.insert(last);
        }
        else if (e==2) {
            int ev;
            cin >> ev;
            call.erase(ev);
        }
        else {
            cout << *call.begin() << "\n";
        }
    }

    return 0;
}