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

int main() {

    int n;
    cin >> n;
    vector<int> a(n), b(n), c(n);
    rep(i,0,n) cin >> a.at(i) >> b.at(i) >> c.at(i);
    vector<vector<int>> dp(3,vector<int>(n,0));
    dp.at(0).at(0) = a.at(0);
    dp.at(1).at(0) = b.at(0);
    dp.at(2).at(0) = c.at(0);

    rep(i,1,n) {
        dp.at(0).at(i) = max(dp.at(1).at(i-1)+a.at(i), dp.at(2).at(i-1)+a.at(i));
        dp.at(1).at(i) = max(dp.at(0).at(i-1)+b.at(i), dp.at(2).at(i-1)+b.at(i));
        dp.at(2).at(i) = max(dp.at(0).at(i-1)+c.at(i), dp.at(1).at(i-1)+c.at(i));
    }

    cout << max(max(dp.at(0).at(n-1),dp.at(1).at(n-1)),dp.at(2).at(n-1)) << "\n";

    return 0;
}