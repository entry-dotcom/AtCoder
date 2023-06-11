#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int> (w));
    char mozi = 'A';
    //cout << char(mozi+1) << "\n";

    rep(i,0,h) {
        rep(j,0,w) cin >> a[i][j];
    }

    rep(i,0,h) {
        rep(j,0,w) {
            if (a[i][j]==0) cout << '.';
            else cout << char(mozi+a[i][j]-1);
        }
        cout << endl;
    }



    return 0;
}