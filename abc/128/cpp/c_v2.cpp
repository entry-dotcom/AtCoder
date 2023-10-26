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

    int n, m, ans = 0;
    cin >> n >> m;
    vector<int> k(m), p(m);
    vector<vector<int>> s(m);
    rep(i,0,m) {
        cin >> k.at(i);
        vector<int> s_i(k.at(i));
        rep(j,0,k.at(i)) {cin >> s_i.at(j); s_i.at(j)--;}
        s.at(i) = s_i;
    }
    rep(i,0,m) cin >> p.at(i);

    rep(bit,0,1<<n) {
        int cnt = 0;
        rep(j,0,m) {
            int on_switches = 0;
            rep(_,0,k.at(j)) {
                if ((bit>>s.at(j).at(_)) & 1) on_switches++;
            }
            if (on_switches%2 == p.at(j)) cnt++;
        }
        if (cnt==m) ans++;
    }

    cout << ans << "\n";

    return 0;
}