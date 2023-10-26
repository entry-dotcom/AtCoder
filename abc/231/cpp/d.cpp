#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
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

int main() {

    int n, m;
    cin >> n >> m;
    dsu uf(n);
    vector<int> graph(n);
    rep(i,0,m) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        if (uf.same(a,b)) {cout << "No" << "\n"; return 0;}
        uf.merge(a,b);
        graph[a]++;
        graph[b]++;
    }

    

    rep(i,0,n) {
        if (graph.at(i)>2) {cout << "No" << "\n"; return 0;};
        //cout << v.first << " " << v.second << "\n";
    }

    // rep(j,0,n) {
    //     stack<int> st;
    //     //for (auto v:mp) if (v.second>0) {st.push(v.first); break;}
    //     vector<bool> visit(n,false);
    //     visit.at(st.top()) = true;
    //     while(!st.empty()) {
    //         int v = st.top();
    //         st.pop();
    //         visit.at(v) = true;
    //         rep(i,0,graph.at(v).size()) {
    //             int point = graph.at(v).at(i);
    //             //if (visit.at(point)) check2 = true;
    //             if (!visit.at(point)) {
    //                 visit.at(point) = true;
    //                 st.push(point);
    //             }
    //         }
    //     }
    // }
    cout << "Yes" << "\n";
    //cout << (check1 || check2 ? "No":"Yes") << "\n";

    return 0;
}