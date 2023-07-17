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
    vector<int> p(n), c(n);
    //vector<vector<int>> f(n);
    vector<vector<bool>> func(n,vector<bool>(m,false));
    
    rep(i,0,n) {
        cin >> p.at(i) >> c.at(i);
        rep(j,0,c.at(i)) {
            int f;
            cin >> f;
            f--;
            func.at(i).at(f) = true;
        }
    }
    
    rep(i,0,n) {
        rep(j,0,n) {
            bool check1 = false, check2 = true, check3 = false;
            if (p.at(i) >= p.at(j)) check1 = true;
            rep(k,0,m) {
                if (func.at(i).at(k)) {
                    if (!func.at(j).at(k)) check2 = false;
                }
            }
            if (p.at(i)>p.at(j)) check3 = true;
            rep(k,0,m) {
                if (func.at(j).at(k)) {
                    if (!func.at(i).at(k)) check3 = true;
                }
            }
            if (check1 && check2 && check3) {cout << "Yes" << "\n"; return 0;}
        }
    }

    cout << "No" << "\n";

    return 0;
}