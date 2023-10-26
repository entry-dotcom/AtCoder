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

    string s, t;
    cin >> s >> t;
    int s_size = s.size(), t_size = t.size();
    vector<vector<int>> dp(t_size+1,vector<int>(s_size+1,0));
    rep(i,0,t_size+1) dp.at(i).at(0) = i;
    rep(i,0,s_size+1) dp.at(0).at(i) = i;

    rep(i,1,t_size+1) {
        rep(j,1,s_size+1) {
            if (t.at(i-1)==s.at(j-1)) dp.at(i).at(j) = min({dp.at(i-1).at(j)+1, dp.at(i).at(j-1)+1, dp.at(i-1).at(j-1)});
            else dp.at(i).at(j) = min({dp.at(i-1).at(j)+1, dp.at(i).at(j-1)+1, dp.at(i-1).at(j-1)+1});
        }
    }
    //rep(i,0,t_size+1) {
      //  rep(j,0,s_size+1) cout << dp.at(i).at(j) << " ";
        //cout << endl;
    //}
    
    string ans = "";
    int width = 0, height = 0;

    while(width<s_size && height<t_size) {
        if (t.at(height)==s.at(width)){ans.push_back(t.at(height)); width++; height++;}
        else {
            if (dp.at(height).at(width)==dp.at(height+1).at(width)) height++;
            if (dp.at(height).at(width)==dp.at(height).at(width+1)) width++;
        }
    }

    cout << ans << "\n";

    return 0;
}