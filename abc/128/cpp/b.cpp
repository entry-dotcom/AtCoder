#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
// 1次元，２次元ベクトルの簡略化
#define vi1 vector<int>
#define vll1 vector<ll>
#define vi2 vector<vector<int>>
#define vll2 vector<vector<ll>>
#define rep(i, start, end) for (int i = start; i < (int)(end); i++)
#define rrep(i, start, end) for(int i=start-1; i>end-1; i--)
#define all(x) (x).begin(),(x).end()
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

    int n;
    cin >> n;
    vector<string> s(n);
    vector<int> p(n);
    vector<int> ans;
    rep(i,0,n) {
        cin >> s.at(i) >> p.at(i);
        ans.push_back(i);
    }

    sort(all(ans),[&](int a, int b) {
        if (s.at(a)!=s.at(b)) return s.at(a) < s.at(b);
        return p.at(a) > p.at(b);
    });

    rep(i,0,n) cout << ans.at(i)+1 << "\n";

    return 0;
}