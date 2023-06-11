#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(q), result(n,k);

    rep(i,0,q) cin >> a[i];

    rep(i,0,q) {
        result[a[i]-1]++;
    }

    rep(i,0,n) {
        result[i] -= q;
    }

    rep(i,0,n) {
        cout << (result[i]<1 ? "No":"Yes") << "\n";
    }

    return 0;
}