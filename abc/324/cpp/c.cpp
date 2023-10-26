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

    int n;
    string t;
    cin >> n >> t;
    vector<bool> check(n,false);
    vector<string> s(n);
    rep(i,0,n) cin >> s.at(i);
    

    rep(i,0,n) {
        const string s_i = s.at(i);
        if (abs((int)s_i.size() - (int)t.size())>1) continue;
        if (s_i.size()==t.size()) {
            int miss1 = 0;
            rep(j,0,s_i.size()) {
                if (s_i.at(j)!=t.at(j)) miss1++;
                if (miss1>1) {check.at(i) = false; break;}
            }
            if (miss1<2) check.at(i) = true;
        }
        if (s_i.size()<t.size()) {
            bool check2 = true;
            rep(j,0,s_i.size()) {
                if (s_i.at(j)!=t.at(j)) {
                    if (j<(s_i.size())) {
                        if (s_i.substr(j,t.size())!=t.substr(j+1,t.size())) {check2 = false; break;}
                    }
                }
            }
            if (check2) check.at(i) = true;
        }
        if (s_i.size()>t.size()) {
            bool check3 = true;
            rep(j,0,t.size()) {
                if (s_i.at(j)!=t.at(j)) {
                    if (j<(t.size())) {
                        if (s_i.substr(j+1,t.size())!=t.substr(j,t.size())) {check3 = false; break;}
                    }
                }
            }
            if (check3) check.at(i) = true;
        }
    }

    vector<int> ans;

    rep(i,0,n) {
        if (check.at(i)) ans.push_back(i+1);
    }

    cout << ans.size() << "\n";
    rep(i,0,ans.size()) {
        if (ans.size()==0) return 0;
        cout << ans.at(i) << (i<(ans.size()-1) ? " ":"\n");
    }

    return 0;
}