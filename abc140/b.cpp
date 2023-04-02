#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, ans = 0;
    cin >> n;
    vector<int> a(n), b(n), c(n-1);

    rep(i,0,n) cin >> a[i];
    rep(i,0,n) cin >> b[i];
    rep(i,0,n-1) cin >> c[i];
    
    rep(i,0,n) ans += b[i];
    rep(i,0,n) {
        if (i>0) {
            if (a[i]-a[i-1]==1) ans += c[a[i-1]-1];
        }
    }

    cout << ans << "\n";

    return 0;
}