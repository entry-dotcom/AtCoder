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

    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> b(n,vector<ll>(m,0));

    rep(i,0,n) rep(j,0,m) cin >> b.at(i).at(j);

    //rep(i,0,n) rep(j,0,m) b.at(i).at(j);
    ll start = b.at(0).at(0);

    rep(i,0,n) {
        rep(j,0,m) {
            if (j<m-1 && b.at(i).at(j)%7==0) {cout << "No" << "\n"; return 0;}
            if (b.at(i).at(j) != start+i*7+j) {cout << "No" << "\n"; return 0;}
        }
    }

    cout << "Yes" << "\n";

    return 0;
}