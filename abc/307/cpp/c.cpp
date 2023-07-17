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

int check_index(vector<string> a) {
    int mn_i, mn_j, mx_i, mx_j;
    mn_i = mn_j = 100;
    mx_i = mx_j = -1;
    rep(i,0,a.size()) {
        rep(j,0,a[0].size()) {
            if (a.at(i).at(j)=='#') {
                mn_i = min(mn_i, i);
                mn_j = min(mn_j, j);
                mx_i = max(mx_i, i);
                mx_j = max(mx_j, j);
            }
        }
    }
    //cout << mn_i << " " << mn_j << " " << mx_i << " " << mx_j << "\n";
    return mn_i, mn_j, mx_i, mx_j;
}

int main() {

    int Ha, Wa, Hb, Wb, Hx, Wx;
    cin >> Ha >> Wa;
    vector<string> a(Ha);
    rep(i,0,Ha) cin >> a.at(i);
    cin >> Hb >> Wb;
    vector<string> b(Hb);
    rep(i,0,Hb) cin >> b.at(i);
    cin >> Hx >> Wx;
    vector<string> x(Hx);
    vector<string> c(20);
    
    //int mn_a_i, mn_a_j, mx_a_i, mx_a_j, mn_b_i, mn_b_j, mx_b_i, mx_b_j, mn_x_i, mn_x_j, mx_x_i, mx_x_j;
    int mn_a_i, mn_a_j, mx_a_i, mx_a_j = check_index(a);
    int mn_b_i, mn_b_j, mx_b_i, mx_b_j = check_index(b);
    int mn_x_i, mn_x_j, mx_x_i, mx_x_j = check_index(x);
    cout << mn_x_i << " " << mn_x_j << " " <<  mx_x_i << " " << mx_x_j << "\n";

    rep(i,0,Hx) cin >> x.at(i);
    rep(i,0,20) c.at(i) = "....................";
    
    check_index(a);

    
    // 先にAシートを貼る
    //vector<vector<char>> tmp(30,vector<char>(30,'.'));
    vector<string> tmp(30);
    rep(i,0,30) tmp.at(i) = "..............................";


    rep(dHa,9,9+Ha) {
        rep(dWa,9,9+Wa) {
            tmp.at(dHa).at(dWa) = a.at(dHa-9).at(dWa-9);
        }
    }

    /*
    // 先にBシートを貼る
    rep(dh0,0,20) {
        rep(dw0,0,20) {
            vector<vector<char>> tmp(30,vector<char>(30,'.'));
            rep(bi,9-Hb,9+Hb) {
                rep(bj,9-Wb,9+Wb) {
                    if (bi<0 || bj<0 || bi>=Hx || bj>Wx) continue;

                }
            }
        }
    }
    */

    return 0;
}