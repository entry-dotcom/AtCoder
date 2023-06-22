#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
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

    int n, m, h, k, x=0, y=0;
    string s;
    cin >> n >> m >> h >> k >> s;
    set<pair<int,int>> xy;
    rep(i,0,m) {
        pair<int,int> z;
        cin >> z.first >> z.second;
        xy.insert(z);
    }

    rep(i,0,n) {
        if (s.at(i)=='R') x++;
        if (s.at(i)=='L') x--;
        if (s.at(i)=='U') y++;
        if (s.at(i)=='D') y--;
        h--;
        if (h<0) {cout << "No" << "\n"; return 0;}
        if (xy.count({x,y}) && h<k) {
            h = k;
            xy.erase({x,y});
        }
    }

    cout << "Yes" << "\n";

    return 0;
}