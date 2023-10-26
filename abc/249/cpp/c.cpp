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

    int n, k;
    cin >> n >> k;
    vector<string> s(n);
    rep(i,0,n) cin >> s.at(i);
    vector<int> ans;

    for (int bit=0; bit<(1<<n); bit++) {
        vector<string> vec;
        map<char, int> mozi_num;
        for (int i=0; i<n; i++) {
            if ((bit>>i) & 1) vec.push_back(s.at(i));
        }
        rep(i,0,vec.size()) {
            rep(j,0,vec.at(i).size()) mozi_num[vec.at(i).at(j)]++;
        }
        int kari_ans = 0;
        for (auto v:mozi_num) if (v.second==k) kari_ans++;
        ans.push_back(kari_ans);
    }

    cout << *max_element(ans.begin(),ans.end()) << "\n";

    return 0;
}