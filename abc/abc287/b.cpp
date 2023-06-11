#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, m, ans=0;
    cin >> n >> m;
    vector<string> s(n), t(m);

    rep(i,n) cin >> s[i];
    rep(i,m) cin >> t[i];

    rep(i,n) {
        string mozi = s[i];
        //cout << mozi.substr(3,3) << " ";
        //bool check = false;
        rep(j,m) {
            if (mozi.substr(3,5)==t[j]) {
                ans++;
                break;
            }
        }
    }


    cout << ans << "\n";

    return 0;
}