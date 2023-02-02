#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, d;
    cin >> n;
    set<int> sz;
    //vector<int> d(n);

    rep(i,n) {
        cin >> d;
        sz.insert(d);
    }

    cout << sz.size() << "\n";

    return 0;
}