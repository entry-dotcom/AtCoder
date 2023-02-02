#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n;
    ll ans=0;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    vector<int> check(n);
    vector<int> cnt(n);

    rep(i,n) {cin >> a[i]; a[i]--;}
    rep(i,n) {cin >> b[i]; b[i]--;}
    rep(i,n) {cin >> c[i]; c[i]--;}
 
    rep(i,n) {
        cnt[b[c[i]]]++;
    }

    rep(i,n) {
        ans += cnt[a[i]];
    }

    cout << ans << "\n";

    return 0;
}