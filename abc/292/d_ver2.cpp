#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;
using P = pair<int, int>;

int main() {

    
    int n, m;
    cin >> n >> m;
    vector<int> graph[n], deg(n);
    vector<bool> visit(n);
    bool f = true;
    
    rep(i,0,m) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    rep(i,0,n) {
        if (!visit[i]) {
            queue<int> que;
            que.push(i);
            int ten = graph[i].size(), hen = 1;
            visit[i] = true;
            while(!que.empty()) {
                int v = que.front();
                que.pop();
                hen++;
                for (int u:graph[v]) {
                    ten++;
                    if (!visit[u]) {
                        que.push(u);
                        visit[u] = true;
                        hen++;
                        ten += graph[u].size();
                    }
                }
            }
            if (!(ten==2*hen)) {
                cout << "No" << "\n";
                return 0;
            }
        }   
    }

    //cout << graph[0].size() << " " << graph[1].size() << " " << graph[2].size() << endl;
    cout << "Yes" << "\n";

    return 0;
}