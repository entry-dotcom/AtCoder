#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
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

    int n, d;
    cin >> n >> d;
    vector<int> x(n), y(n);
    vector<vector<bool>> graph(n,vector<bool>(n,false));
    vector<bool> ans(n,false);
    ans.at(0) = true;

    rep(i,0,n) {
        cin >> x.at(i) >> y.at(i);
        x.at(i)--, y.at(i)--;
    }

    rep(i,0,n) {
        rep(j,0,n) {
            if ((x.at(i)-x.at(j))*(x.at(i)-x.at(j))+(y.at(i)-y.at(j))*(y.at(i)-y.at(j)) <= d*d) graph.at(i).at(j) = true;
        }
    }

    queue<int> que;
    que.push(0);

    while(!que.empty()) {
        int q = que.front();
        que.pop();
        rep (i,0,n) {
            if (graph.at(q).at(i) && !ans.at(i)) {
                que.push(i);
                ans.at(i) = true;
            }
        }
    }

    rep(i,0,n) cout << (ans.at(i) ? "Yes":"No") << "\n";

    return 0;
}