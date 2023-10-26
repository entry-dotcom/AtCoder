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
//vector<int> dj = {-1,0,1,-1,1,-1,0,1}, di = {-1,-1,-1,0,0,1,1,1};
vector<int> dj = {0,-1,1,0}, di = {-1,0,0,1};

int main() {

    int n, m, start_i, start_j, ans = 0, ans1=0;
    start_i = start_j = 1;
    cin >> n >> m;
    vector<string> s(n);
    vector<vector<bool>> visit(n,vector<bool>(m,false));
    visit.at(1).at(1) = true;

    rep(i,0,n) cin >> s.at(i);
    
    rep(i,0,n) {
        rep(j,0,m) {
            rep(dij,0,4) {
                rep(st,1,max(n,m)) {
                    int si = start_i+i+(di.at(dij)*st), sj = start_j+j+(dj.at(dij)*st);
                    if (0>si || si>n-1 || 0>sj || sj>m-1) break;
                    if (s.at(si).at(sj)=='.') visit.at(si).at(sj) = true;
                }
            }
        }
    }
    
    rep(i,0,n) rep(j,0,m) if (visit.at(i).at(j)) ans++;
    cout << ans << "\n";

    return 0;
}