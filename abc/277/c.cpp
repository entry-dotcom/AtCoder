#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    ll n;
    cin >> n;
    map<ll, vector<ll> > graph;

    rep(i,n) {
        ll a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    //graph[1].push_back(1);

    //vector<bool> visit(graph.size(),false);
    set<ll> visit;
    queue<ll> que;
    que.push(1);
    visit.insert(1);

    while(!que.empty()) {
        ll index = que.front();
        que.pop();
        for (ll v:graph[index]) {
            if (!visit.count(v)) {
                que.push(v);
                visit.insert(v);
            }
        }
    }

    //cout << graph.size();
    
    
    cout << *visit.rbegin() << "\n";

    return 0;
}