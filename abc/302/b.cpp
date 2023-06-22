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
vector<int> dj = {-1,0,1,-1,1,-1,0,1}, di = {-1,-1,-1,0,0,1,1,1};

int main() {

    int h, w, ni, nj;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,0,h) cin >> s.at(i);
    

    rep(i,0,h) {
        rep(j,0,w) {
            rep(k,0,8) {
                string snuke = "";
                queue<int> n_i, n_j;
                rep(l,0,5) {
                    nj = j + l * dj.at(k), ni = i + l * di.at(k);
                    if (ni<0 || nj<0 || ni>=i || nj>=j) break;
                    snuke += s.at(ni).at(nj);
                    n_i.push(ni+1), n_j.push(nj+1);
                }
                if (snuke=="snuke") {
                    rep(m,0,5) {
                        cout << ni << nj << "\n";
                    }
                    return 0;
                }
            }
            
        }
    }

    return 0;
}