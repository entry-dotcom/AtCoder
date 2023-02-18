#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;
void solve(int n, int m, vector<string>s, vector<string> t) {
    int ans=0;
    rep(i,n) {
        rep(j,m) {
            if (s[i].substr(3,3)==t[j]) {
                ans++;
                break;
            }
        }
    }
    cout << ans << "\n";
}

int main() {

    int n, m;
    cin >> n >> m;
    vector<string> s(n), t(m);

    rep(i,n) cin >> s[i];
    rep(i,m) cin >> t[i];

    solve(n,m,s,t);
    
    return 0;
}