#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, m;
    cin >> n >> m;
    vector<int> graph[m+1];

    rep(i,m) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    vector<bool> visited(n,false);
    vector<int> dist(n,0);
    queue<int> q;
    q.push(0);
    
    while(!q.empty()) {
        int pos = q.front();
        q.pop();
        for (int i=0; i<(int)graph[i].size(); i++) {
            int next = graph[pos][i];
            if (dist[next]==0) {
                dist[next] = dist[pos]+1;
                q.push(next);
                visited[next] = true;
            }
            
        }
    }
    
    rep(i,m) {
        if (visited[i]) {
            
            cout << dist[i] << "\n";
        }
        else cout << -1 << "\n";
    }

    return 0;
}