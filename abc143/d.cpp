#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n;
    ll ans = 0;
    cin >> n;
    vector<int> l(n);
    rep(i,0,n) cin >> l[i];
    sort(l.begin(),l.end());

    rep(i,0,n) {
        rep(j,i+1,n) {
            rep(k,j+1,n) {
                if (l[i]+l[j]>l[k]) ans++;
            }
        }
    }

    cout << ans << "\n";
    
    return 0;
}