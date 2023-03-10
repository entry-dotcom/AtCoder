#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

void solve(int q) {
    map<int, int> check;
    rep(i,0,q) {
        int c, x;
        cin >> c >> x;
        if (c==1) check[x]++;
        else if (c==2) check[x]+=2;
        else cout << (check[x]>1 ? "Yes" : "No") << "\n";
    }
   

}

int main() {

    int n, q;
    cin >> n >> q;
    solve(q);

    return 0;
}