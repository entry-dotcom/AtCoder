#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int r, c;
    cin >> r >> c;
    vector<string> b(r);
    vector<vector<bool>> check(r,vector<bool>(c,false));

    rep(i,0,r) cin >> b[i];

    rep(i,0,r) {
        rep(j,0,c) {
            if (isdigit(b[i][j])) {
                int d = b[i][j]-'0';
                rep(ni,0,r) {
                    rep(nj,0,c) {
                        if (abs(ni-i)+abs(nj-j)<=d) check[ni][nj] = true;
                    }
                }
            }
        }
    }

    rep(i,0,r) {
        rep(j,0,c) {
            if (!check[i][j] && b[i][j]=='#') cout << '#';
            else cout << '.';
        }
        cout << endl;
    }

    return 0;
}