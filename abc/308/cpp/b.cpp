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

    int n, m, ans = 0, p0;
    cin >> n >> m;
    vector<string> c(n), d(m);
    vector<int> p(m);
    set<string> dish;

    rep(i,0,n) cin >> c.at(i);
    map<string,int> d_p;

    rep(i,0,m) {
        cin >> d.at(i);
        dish.insert(d.at(i));
    }
    
    rep(i,0,m+1) {
        if (i==0) cin >> p0;
        else cin >> p.at(i-1);
    }
    //d_p["Non"] = p0;
    
    
    rep(i,0,m) {
        if (dish.count(d.at(i))) d_p[d.at(i)] = p.at(i);
    }

    rep(i,0,n) {
        if (!dish.count(c.at(i))) ans += p0;
        else ans += d_p[c.at(i)];
        //cout << ans << "\n";
    }

    cout << ans << "\n";
    
    return 0;
}