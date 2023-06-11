#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    vector<int> num(n);
    vector<vector<int> > graph(n);

    rep(i,m) {
        cin >> a[i];
        graph[a[i]-1].push_back(a[i]);
        graph[a[i]].push_back(a[i]-1);
    }

    vector<bool> check(n,false);
    queue<int> que;
    //que.push(0);
    //check[0] = true;

    rep(i,n) {
        if (!check[i]) {
            que.push(i);
            check[i] = true;
            vector<int> vec = graph[i];
            sort(vec.begin(),vec.end(),greater<int>());
            rep(j,vec.size()) {
                cout << vec[j] << " ";
                check[vec[j]] = true;
            }
            /*
            while(!que.empty()) {
                int next = que.front();
                que.pop();
                for (auto v:graph[next]) {
                    if (!check[v]) {
                        check[v] = true;
                        que.push(v);
                    }
                    //cout << v << " ";
                }
            }
            */
        }
    }


    

    return 0;
}