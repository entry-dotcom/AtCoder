#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, q;
    cin >> n >> q;
    map<int, pair<int,bool> > check;

    rep(i,0,q) {
        int x, y;
        cin >> x >> y;
        if (check[y].first>1) check[y].second = true;
        if (x==1) check[y].first++;
        else if (x==2) check[y].first+=2;
        else cout << (check[y].second ? "Yes":"No") << "\n";
    }

    return 0;
}