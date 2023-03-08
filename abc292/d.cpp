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
    dsu graph(n);
    vector<int> u(m), v(m);

    rep(i,0,m) {
        cin >> u[i] >> v[i];
        u[i]--, v[i]--;
        graph.merge(u[i],v[i]);
    }

    vector<int> vs(n), es(n);
    rep(i,0,n) vs[graph.leader(i)]++;
    rep(i,0,m) es[graph.leader(u[i])]++;

    cout << (vs==es ? "Yes":"No") << "\n";

    return 0;
    
}