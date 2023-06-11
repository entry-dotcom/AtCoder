#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int N, X, Y;
    cin >> N >> X >> Y;
    vector<vector<int> > to(N+1);
    rep(i, N-1) {
        int a, b;
        cin >> a >> b;
        to[a].push_back(b);
        to[b].push_back(a);
    }

    vector<int> ans;
    auto dfs = [&] (auto f, int v, int p=-1) -> bool {
        if (v==X) {
            ans.push_back(v);
            return true;
        }
        for (int u : to[v]) {
            if (u==p) continue;
            if (f(f, u, v)) {
                ans.push_back(v);
                return true;
            }
        }
        return false;
    };
    dfs(dfs, Y);

    rep(i, ans.size()) cout << ans[i] << " ";
    cout << endl;
    return 0;
}