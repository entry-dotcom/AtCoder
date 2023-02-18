#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int h, w;
    cin >> h >> w;
    vector<string> grid(h);
    vector<bool> row(h,false);
    vector<bool> col(w,false);

    rep(i,0,h) cin >> grid[i];

    rep(i,0,h) {
        rep(j,0,w) {
            if (grid[i][j]=='#') {
                row[i] = true;
                col[j] = true;
            }
        }
    }
    
    rep(i,0,h) {
        if (row[i]) {
            rep(j,0,w) {
                if (col[j]) cout << grid[i][j];
            }
            cout << endl;
        }
    }


    return 0;
}