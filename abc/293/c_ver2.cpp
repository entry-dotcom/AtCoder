#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;
int w, h, ans = 0;
vector<vector<int>> a;


void dfs(int i, int j, set<int>root) {
    if (root.count(a[i][j])) return;
    if (i==h-1 && j==w-1) {
        ans++;
        return;
    }
    root.insert(a[i][j]);
    if (i+1<h) dfs(i+1,j,root);
    if (j+1<w) dfs(i,j+1,root);

    return;
}

int main() {

    cin >> h >> w;
    set<int> root;
    a = vector(h,vector<int>(w));
    rep(i,0,h) rep(j,0,w) cin >> a[i][j];
    
    dfs(0,0,root);

    cout << ans << "\n";
}