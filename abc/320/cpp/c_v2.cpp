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

    int m, ans = INF;
    cin >> m;
    vector<string> s(3);
    rep(i,0,3) cin >> s.at(i);

    rep(t0,0,3*m) {
        rep(t1,0,3*m) {
            rep(t2,0,3*m) {
                if (t0==t1) continue;
                if (t1==t2) continue;
                if (t0==t2) continue;
                if (s.at(0).at(t0%m)!=s.at(1).at(t1%m)) continue;
                if (s.at(1).at(t1%m)!=s.at(2).at(t2%m)) continue;
                if (s.at(0).at(t0%m)!=s.at(2).at(t2%m)) continue;
                ans = min(ans,max({t0,t1,t2}));
            }
        }
    }

    cout << (ans==INF ? -1:ans) << "\n";

    return 0;
}