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
//　グリッド探索変数
vector<int> di = {-1,-1,1,1}, dj = {-1,1,-1,1};

int main() {

    int h, w;
    cin >> h >> w;
    vector<string> c(h);
    vector<int> ans(min(h,w));

    rep(i,0,h) cin >> c.at(i);
    
    rep(i,0,h) {
        rep(j,0,w) {
            if (c.at(i).at(j)=='#') {
                int d = 1;
                while(true) {
                    if (i+d>=h || j+d>=w || i-d<0 || j-d<0) break;
                    if (c.at(i+d).at(j+d)=='.' || c.at(i+d).at(j-d)=='.' || c.at(i-d).at(j+d)=='.' || c.at(i-d).at(j-d)=='.') break;   
                    d++;
                }
                if (d>1) ans.at(d-2)++;  
            }
        }
    }

    rep(i,0,(int)ans.size()) {
        if (i<(int)ans.size()-1) cout << ans.at(i) << " ";
        else cout << ans.at(i) << "\n";
    }
    cout << endl;

    return 0;
}