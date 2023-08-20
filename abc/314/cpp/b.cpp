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

    int n, x;
    cin >> n;
    vector<pair<int,vector<int>>> a(n);
    //vector<pair<int,int>> num_hito(n);

    rep(i,0,n) {
        int c_i;
        cin >> c_i;
        //num_hito.at(i).second = i+1;
        //num_hito.at(i).first = c_i;
        vector<int> c(c_i);
        rep(j,0,c_i) cin >> c.at(j);
        a.at(i).second = c;
        a.at(i).first = c_i;
    }
    cin >> x;

    bool check = false;
    rep(i,0,n) {
        if (count(a.at(i).second.begin(),a.at(i).second.end(),x)) {
            check = true;
        }
    }
    if (!check) {cout << 0 << "\n" << "\n"; return 0;}

    int mn_num_true = 100;

    rep(i,0,n) {
        if (count(a.at(i).second.begin(),a.at(i).second.end(),x)) mn_num_true = min(mn_num_true,a.at(i).first);
    }
    vector<int> ans;

    rep(i,0,n) {
        if (count(a.at(i).second.begin(),a.at(i).second.end(),x) && a.at(i).first==mn_num_true) ans.push_back(i+1);
    }
    cout << ans.size() << "\n";
    for (int v:ans) cout << v << " ";
    cout << endl;

    return 0;
}