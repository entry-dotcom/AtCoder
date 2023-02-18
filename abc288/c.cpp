#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int solve(vector<vector<int>> graph, int n, int m) {
    int s = 0;
    vector<bool> visit(n);
    rep(i,n) {
        if (!visit[i]) {
            queue<int> que;
            s++;
            que.push(i);
            while(!que.empty()) {
                int next = que.front(); que.pop();
                for (auto v:graph[next]) {
                    if (!visit[v]) {
                        visit[v] = true;
                        que.push(v);
                    }
                }
            }
        }
    }
    return m - n + s;
}

int main() {

    int n, m;
    cin >> n >> m;
    vector<vector<int>> graph(n);

    rep(i,m) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    
    cout << solve(graph, n, m) << "\n";

    return 0;
}