#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;
int N, X, Y;
vector<bool> visited(200000+1, false);
vector<vector<int>> graph(200000+1);
deque<int> ans;
bool stop = false;
void dfs(int from, int to) {
    if (!stop) ans.push_back(from);
    if (from==to) stop = true;
    visited[from] = true;
    int sz = graph[from].size();
    for (int i=0; i<sz; i++){
        if (!visited[graph[from][i]]) dfs(graph[from][i], to);
    }
    //if (ans.back()!=to) ans.pop_back();
    if (!stop) ans.pop_back();
}

int main() {
    
    cin >> N >> X >> Y;
    
    for (int i=0; i<N-1; i++) {
        int a, b;
        cin >> a >> b;
        graph[b].push_back(a);
        graph[a].push_back(b);
    }
    stop = false;
    dfs(X, Y);
    //cout << ans.size();
    while(!ans.empty()) {
        cout << ans.front();
        ans.pop_front();
        if (ans.empty()) cout << endl;
        else cout << " ";
    }
    
    
    return 0;
}