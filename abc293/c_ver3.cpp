#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n = 3;
    int h, w;
    cin >> h >> w;

    vector<vector<int>> a(w,vector<int>(h));

    rep(i,0,w) rep(j,0,h) cin >> a[i][j];

    for (int i=0;i<1LL<<(w+h-1);i++) {
        set<int> visit;
        int num_zero = 0;
        rep(j,0,j<w+h-1) {
            
            //if (i.test(j)) num_zero++;
        }
        cout << num_zero << "\n";
    }

}