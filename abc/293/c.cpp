#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;
int h, w, ans;
//vector<vector<int>> a(h,vector<int>(w));
vector<vector<int>> a;

void dfs(int i, int j, set<int> s) {
    if (s.count(a[i][j])) return;
    if (i==h-1 && j==w-1) {
        ans++;
        return;
    }
    s.insert(a[i][j]);
    if (j+1<w) dfs(i,j+1,s);
    if (i+1<h) dfs(i+1,j,s);

    return;
}


int main() {
    
    cin >> h >> w;
    a = vector(h,vector<int>(w));
    rep(i,0,h) rep(j,0,w) cin >> a[i][j];

    dfs(0,0,set<int>());

    cout << ans << "\n";

    return 0;
}