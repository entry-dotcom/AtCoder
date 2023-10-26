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
// サイズNの文字列Sの回文のvectorを出力　o(N^2)
vector<string> Palindrome(string s) {
    vector<string> palindrome_vector; int n = s.size();
    rep(i,0,n) rep(j,i+1,n+1) {
            string s_i = s.substr(i,j-i); bool check = true;
            rep(k,0,(int)s_i.size()) if (s_i.at(k)!=s_i.at((int)s_i.size()-1-k)) check = false;
            if (check) palindrome_vector.push_back(s_i);
        }
    return palindrome_vector;
}

//　グリッド探索変数
vector<int> dj = {-1,0,1,-1,1,-1,0,1}, di = {-1,-1,-1,0,0,1,1,1};

int main() {

    int n, m;
    cin >> n >> m;
    vector<int> now_score(n,0);
    vector<int> a(m);
    vector<string> s(n);
    rep(i,0,m) cin >> a.at(i);
    //rep(i,0,m) a.at(i).first = i; 
    rep(i,0,n) cin >> s.at(i);
    iota(now_score.begin(),now_score.end(),1);
    // sort(a.begin(),a.end(),[] (pair<int,int> x, pair<int,int> y) {
    //     return x.second > y.second;
    // });

    rep(i,0,n) {
        rep(j,0,m) if (s.at(i).at(j)=='o') now_score.at(i) += a.at(j);
    }
    int mx = *max_element(now_score.begin(),now_score.end());
    // rep(i,0,n) cout << now_score.at(i) << " ";
    // cout << "\n";
   
    rep(i,0,n) {
        vector<int> not_solve;
        int ans = 0;
        rep(j,0,m) if (s.at(i).at(j)=='x') not_solve.push_back(a.at(j));
        sort(not_solve.rbegin(),not_solve.rend());
        //cout << *not_solve.begin()<<" ";
        while(now_score.at(i)<mx) {
            now_score.at(i) += not_solve.at(ans);
            ans++;
        }
        cout << ans << "\n";
        //cout << *not_solve.begin() << " ";
    }



    return 0;
}