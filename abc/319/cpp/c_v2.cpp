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

    //int n = 1;
    vector<int> v = {1, 2, 3, 4};
    vector<int> cells(9,0);
    for (auto && c : cells) cin >> c;
    vector<int> order(10,0);
    rep(i,0,10) order.at(i) = i+1;
    vector<tuple<int,int,int>> row = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7 ,8},
        {0, 3, 6},
        {1, 4, 7},
        {2, 5, 8},
        {0, 4, 8},
        {2, 4, 6}
    };
    int patern = 0, not_disapoint = 0;
    
    do {
        patern++;
        bool disapoint_flag = false;
        for (auto && [a,b,c] : row) {
            if (cells.at(a)==cells.at(b) && order.at(a)<order.at(c) && order.at(b)<order.at(c)) disapoint_flag = true;
            if (cells.at(b)==cells.at(c) && order.at(b)<order.at(a) && order.at(c)<order.at(a)) disapoint_flag = true;
            if (cells.at(c)==cells.at(a) && order.at(a)<order.at(b) && order.at(c)<order.at(b)) disapoint_flag = true;
        }
        if (!disapoint_flag) not_disapoint++;

    } while (next_permutation(order.begin(), order.end()));

    cout << setprecision(10) << (double)not_disapoint/patern << "\n";
    
    

    return 0;
}