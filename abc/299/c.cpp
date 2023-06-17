#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
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

int main() {

    int n, level = 0, ans = 0;
    string s;
    pair<bool,bool> is_exist;
    is_exist.first = false, is_exist.second = false;
    cin >> n >> s;

    rep(i,0,n) {
        if (s.at(i)=='o') is_exist.first = true;
        else is_exist.second = true; 
    }

    if (is_exist.first==false || is_exist.second==false) {cout << -1 << "\n"; return 0;}
    
    rep(i,0,n) {
        if (s.at(i)=='-') {ans = max(level,ans); level = 0;}
        if (s.at(i)=='o') {level++; ans = max(ans,level);}
    }
    
    cout << ans << "\n";

    return 0;
}