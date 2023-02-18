#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, m;
    cin >> n >> m;
    vector<vector<int>> g(n);
    rep(i,m) {
        int u, v;
        cin >> u >> v;
        --u, --v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int ans = 0;
    vector<int> visited(n);
    stack<int> st;
    rep(i,n) {
        if (visited[i]) continue;
        ans++, visited[i] = true;
        st.push(i);
        while (!st.empty()) {
            int c = st.top();
            st.pop();
            for (auto& d : g[c]) {
                if (visited[d]) continue;
                visited[d] = true, st.push(d);
            }
        }
    }
    cout << ans << "\n";
    
    rep(i, n) {
        rep(j,n) {
            cout << g[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}