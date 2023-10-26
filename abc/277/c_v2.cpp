#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
// 1次元，２次元ベクトルの簡略化
#define vi1 vector<int>
#define vll1 vector<ll>
#define vi2 vector<vector<int>>
#define vll2 vector<vector<ll>>
// 大きい値
const ll mod1 = 1000000007;
const double PI = 3.14159265358979;
const int INF = 2000000000;
// 10進数の格桁の和
int sum_digit(int n) {int ans = 0; while(n>0) { ans += n%10; n /= 10;} return ans;}
//　行列の 90 度回転
vi2 rotate(vi2 a) {vi2 na; int sz = a.size(); rep(i,0,sz) {rep(j,0,sz) na.at(i).at(j) = a.at(sz-1-j).at(i);} return na;}
//　グリッド探索変数
vector<int> dj = {-1,0,1,-1,1,-1,0,1}, di = {-1,-1,-1,0,0,1,1,1};

void dfs(map<int,vector<int>>graph, map<int,bool> visit, int n) {
    visit[n] = true;
    rep (i,0,graph.at(n).size()) {
        if (visit[i]) continue;
        dfs(graph,visit,i);
    }
    // rep(i,0,graph[n].size()) {
    //     if (!visit.at(i)) {
    //         visit.at(i) = true;
    //         dfs(visit, graph[n][i]);
    //     }
    // }
}

int main() {

    int n;
    cin >> n;
    map<int,vector<int>> graph;
    map<int,bool> visit;

    rep(i,0,n) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
        visit[a] = false;
        visit[b] = false;
    }

    dfs(graph,visit,0);

    cout << *visit.rbegin() << "\n";
//    for (auto v:visit) {
//         //if (visit.at(i)) {cout << i+1 << "\n"; return 0;}
//         if (!v.second) cout << v.first << " ";
//     }

    return 0;
}