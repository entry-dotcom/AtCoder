#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    vector<string> s(8);

    rep(i,0,8) cin >> s[i];

    rep(i,0,8) {
        rep(j,0,8) {
            if (s[i][j]=='*') {
                cout << char(j+97) << 8-i << "\n";
            }
        }
    }

    //rep(i,0,8) cout << s[i] << "\n";

    return 0;
}