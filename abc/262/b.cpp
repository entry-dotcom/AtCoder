#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int N, M, ans=0;
    cin >> N >> M;
    vector<vector<bool> > adj(N, vector<bool>(N));
    rep(i, M) {
        int u, v;
        cin >> u >> v;
        u--; v--;
        adj[u][v] = adj[v][u] = true;
    }
    
    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++) {
            for (int k=j+1; k<N; k++) {
                if (adj[i][j] & adj[j][k] & adj[i][k]) ans++;
            }
        }
    }
    
    cout << ans << "\n";

    return 0;
}