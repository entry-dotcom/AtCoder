#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    ll n, m, edge=0;
    cin >> n >> m;
    bool check = true;
    vector<vector<ll>> vec(n);
    
    if (m != n-1) check = false;

    rep(i,m) {
        ll u_m, v_m;
        cin >> u_m >> v_m;
        u_m--, v_m--;
        vec[u_m].push_back(v_m);
        vec[v_m].push_back(u_m);
    }

    rep(i,n) {
        if (vec[i].size()>2) check = false;
    }

    vector<bool> reach(n,false);
    queue<int> que;
    que.push(0);
    reach[0] = true;

    while(!que.empty()) {
        const int u = que.front();
        que.pop();
        for (const int v:vec[u]) {
            if (!reach[v]) {
                que.push(v);
                reach[v] = true;
            }
        }
    }


    rep(i,n) {
        if (!reach[i]) {
            check = false;
            break;
        }
    }

    /*
    // 次数を判定
    rep(i,n) {
        if (vec[i].size()==1) edge++;
    }
    if (edge!=2) check = false;
    */

    cout << (check ? "Yes":"No") << "\n";

    return 0;
}