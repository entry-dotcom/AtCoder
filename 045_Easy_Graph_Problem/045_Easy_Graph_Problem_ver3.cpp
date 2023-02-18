#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, m, ans=0;
    cin >> n >> m;
    vector<int> graph[m+1];

    rep(i,m) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    rep (i,n) {
        int cnt = 0;
        for (int j=0; j<graph[i].size(); j++) {
            if (graph[i][j] < i) cnt++;
        }
        if (cnt==1) ans++;
    }
    
    cout << ans << "\n";

    return 0;
}