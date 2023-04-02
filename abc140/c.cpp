#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n;
    cin >> n;
    vector<int> b(n-1);
    ll ans = 0;

    rep(i,0,n-1) cin >> b[i];
    rep(i,0,n-1) {
        ans += max(b[i],b[i+1]);
    }

    cout << ans << "\n";

    return 0;
}