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
using mint  = modint998244353;
int main() {

    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<mint>> dp(n+1,vector<mint>(k+1,0));
    dp.at(0).at(0) = 1;

    rep(i,0,n) {
        rep(j,0,k) {
            rep(l,1,m+1) {
                if (j+l<=k) dp.at(i+1).at(j+l) += dp.at(i).at(j);
            }
        }
    }

    mint ans = 0;
    rep(i,1,k+1) ans += dp.at(n).at(i);

    cout << ans.val() << "\n";
    
    return 0;
}