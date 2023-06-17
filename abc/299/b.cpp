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
vi2 rotate(vi2 a,vi2 b) {vi2 na; int sz = a.size(); rep(i,0,sz) {rep(j,0,sz) na.at(i).at(j) = a.at(sz-1-j).at(i);} return na;}

int main() {

    int n, t;
    cin >> n >> t;
    vector<int> c(n), r(n);
    pair<int,int> l_max = {-1,-1};
    bool is_t = false;

    rep(i,0,n) cin >> c.at(i);
    rep(i,0,n) cin >> r.at(i);

    rep(i,0,n) {
        if (c.at(i)==t) is_t = true;
    }

    if (is_t) {
        rep(i,0,n) {
            if (c.at(i)==t) {
                if (l_max.second<r.at(i)) {
                    l_max.first = i+1;
                    l_max.second = r.at(i);
                }
            }
        }
    }
    else {
        rep(i,0,n) {
            if (c.at(i)==c.at(0)) {
                if (l_max.second<r.at(i)) {
                    l_max.first = i+1;
                    l_max.second = r.at(i);
                }
            }
        }
        if (l_max.first==-1) l_max.first = 1;
    }

    cout << l_max.first << "\n";

    return 0;
}