#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n;
    cin >> n;
    vector<int> a(n+1);
    map<int, bool> hito;
    rep(i,1,n+1) cin >> a[i];
    set<int> check;

    rep(i,1,n+1) {
        if (!hito[i]) hito[a[i]] = true;
        //check.insert(a[i]);
    }

    int ans = 0;
    rep(i,1,n+1) {
        if (!hito[i]) ans++;
    }
    cout << ans << "\n";

    rep(i,1,n+1) {
        if (!hito[i]) cout << i << " ";
    }

    cout << endl;
    

    return 0;
}