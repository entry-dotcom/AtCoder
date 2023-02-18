#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

bool solve_BFS(int n, vector<vector<int>> graph) {
    vector<bool> can(n,false);
    queue<int> que;
    que.push(0);
    can[0] = true;

    // 幅優先探索
    while(!que.empty()) {
        int index = que.front();
        que.pop();
        for (auto u:graph[index]) {
            if (!can[u]) {
                can[u] = true;
                que.push(u);
            }
        }
    }
    //　連結の判定
    bool check = true;
    rep(i,n) {
        if (!can[i]) {
            check = false;
            break;
        }
    }
    return check;
}

int main() {

    int n, m, edge=0;
    cin >> n >> m;
    vector<vector<int>> graph(n);
    bool check = true;

    rep(i,m) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    rep(i,n) {
        if (graph[i].size()==1) edge++;
        else if  (graph[i].size()>2) {
            check = false;
            break;
        }
    }

    vector<bool> visit(n,false);
    stack<int> st;
    st.push(0);
    visit[0] = true;

    while(!st.empty()) {
        int index = st.top();
        st.pop();
        for (auto u:graph[index]) {
            if (!visit[u]) {
                visit[u] = true;
                st.push(u);
            }
        }
    }
    
    rep(i,n) {
        if (!visit[i]) {
            check = false;
            break;
        }
    }
    
    cout << (check&&edge==2 ? "Yes":"No") << "\n";

    //cout << (solve_BFS(n,graph)&&edge==2 ? "Yes":"No") << "\n";

    return 0;
}