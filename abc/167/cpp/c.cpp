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

    int n, m, x;
    cin >> n >> m >> x;
    vector<int> c(n);
    vector<vector<int>> a(n,vector<int> (m,0));
    vector<int> ans(1<<n,1<<10);
    vector<pair<bool,int>> possible(1<<n);
    rep(i,0,1<<n) {
        possible.at(i).first = true;
        possible.at(i).second = INF;
    }

    rep(i,0,n) {
        cin >> c.at(i);
        rep(j,0,m) cin >> a.at(i).at(j);
    }

    int false_num = 0;

    rep(bit,0,1<<n) {
        int amount;
        vector<int> skill(m,0);
        rep(i,0,n) {
            if ((bit>>i) & 1) {
                amount  += c.at(i);
                rep(j,0,m) skill.at(j) += a.at(i).at(j);
            }
        }
        rep(i,0,m) {
            if (skill.at(i) < x) {possible.at(bit).first = false; false_num++;}
        }
        possible.at(bit).second = amount;
    }
    cout << false_num << "\n";

    if (false_num==1<<n) {cout << -1 << "\n"; return 0;}

    int mn_amount = INF;

    rep(i,0,1<<n) {
        if (possible.at(i).first && mn_amount>=possible.at(i).second) mn_amount = possible.at(i).second;
    }

    cout << mn_amount << "\n";


    return 0;
}