#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, m;
    cin >> n >> m;
    vector<int> graph(n);

    rep(i,0,m) {
        int a,c;
        char b,d;
        cin >> a >> b >> c >> d;
        graph[a].push_back(c);
        graph[c].push_back(a);
    }

    vector<bool> visit(n);
    

   

    return 0;
}