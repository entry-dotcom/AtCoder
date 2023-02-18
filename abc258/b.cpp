#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const int di[] = {-1,-1,-1,0,0,1,1,1};
const int dj[] = {-1,0,1,-1,1,-1,0,1};

int main() {
    int n;
    cin >> n;
    vector<vector<int> > a(n, vector<int>(n));
    rep(i,n) {
        string s;
        cin >> s;
        rep(j,n) {
            a[i][j] = s[j] - '0';
        }
    }

    ll ans = 0;
    rep(si,n)rep(sj,n)rep(v,8) {
        int i = si, j = sj;
        ll x = 0;
        rep(k,n) {
            x = x*10+a[i][j];
            i += di[v];
            j += dj[v];
            i = (i+n)%n;
            j = (j+n)%n;
        }
        ans = max(ans,x);
    }

    cout << ans << endl;

    return 0;
}