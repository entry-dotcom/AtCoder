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

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    rep(i,0,n) cin >> a.at(i);
    rep(i,0,m) cin >> b.at(i);
    
    int wa = 0, ac = 1e9+1;
    
    while(wa+1<ac) {
        int wj = (wa+ac)/2;
        int na = 0, nb = 0;
        rep(i,0,n) if (a.at(i) <= wj) na++;
        rep(i,0,m) if (b.at(i) >= wj) nb++;
        if (na >= nb) ac = wj;
        else wa = wj;
        cout << na << " " << nb << " " << ac << "\n";
    }

    cout << ac << "\n";
}