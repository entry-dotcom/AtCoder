#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;
// 10進数の格桁の和
int sum_digit(int n) {int ans = 0; while(n>0) { ans += n%10; n /= 10;} return ans;}

int main() {

    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h,vector<int>(w));
    vector<vector<int>> ans(h,vector<int>(w));
    vector<int> row(h,0);
    vector<int> columns(w,0);

    rep(i,0,h) rep(j,0,w) cin >> a[i][j];
    rep(i,0,h) rep(j,0,w) row[i] += a[i][j];
    rep(j,0,w) rep(i,0,h) columns[j] += a[i][j];

    rep(i,0,h) {
        rep(j,0,w) {
            if (j==w-1) cout << row[i]+columns[j]-a[i][j] << "\n";
            else cout << row[i]+columns[j]-a[i][j] << " ";
        }
    }

    



    return 0;
}