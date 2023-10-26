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
    vector<ll> now_score(n);
    vector<pair<ll,ll>> a(m);
    rep(i,0,m) cin >> a.at(i).first;
    rep(i,0,m) a.at(i).second = i+1;
    vector<string> s(n);
    rep(i,0,n) cin >> s.at(i);
    rep(i,0,n) {
        now_score.at(i) += i+1;
        rep(j,0,m) {
            if (s.at(i).at(j)=='o') now_score.at(i) += a.at(j).first;
        }
    }

    // rep(i,0,n) cout << now_score.at(i) << " ";
    sort(a.rbegin(),a.rend());
    // rep(i,0,n) cout << now_score.at(i) << " ";
    // cout << endl;
    ll max_score = *max_element(now_score.begin(),now_score.end());
    vector<ll> ans(n,0);

    rep(i,0,n) {
        if (now_score.at(i)==max_score) continue;
        rep(j,0,m) {
            if (s.at(i).at(a.at(j).second-1)=='o') continue;
            now_score.at(i) += a.at(j).first;
            ans.at(i)++;
            if (now_score.at(i) > max_score) break;
        }
    }
// rep(i,0,n) cout << now_score.at(i) << "\n";
    rep(i,0,n) cout << ans.at(i) << "\n";

    return 0;
}