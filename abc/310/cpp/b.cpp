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

bool check1(int fi, int fj) {return fi >= fj;}
bool check2(vector<int> fi, vector<int> fj) {
    set<int> st_of_fi;
    rep(i,0,fi.size()) st_of_fi.insert(fi.at(i));
    if (fi.size()<fj.size()) {
        rep(i,0,fj.size()) {
            if (!st_of_fi.count(fj.at(i))) return false;
        }
    }
    return true;
}
bool check3(int pi, int pj, vector<int> fi, vector<int> fj) {
    set<int> st_of_fi;
    rep(i,0,fi.size()) st_of_fi.insert(fi.at(i));
    bool check = false;
    if (fi.size()<fj.size()) {
        rep(i,0,fj.size()) {
            if (!st_of_fi.count(fj.at(i))) check = true;
        }
    }
    return ((pi > pj) || check);
}

int main() {

    int n, m;
    cin >> n >> m;
    vector<int> p(n), c(n);
    vector<vector<int>> f(n);

    rep(i,0,n) {
        cin >> p.at(i) >> c.at(i);
        vector<int> fi(c.at(i));
        rep(j,0,c.at(i)) cin >> fi.at(j);
        f.at(i) = fi;
    }

    rep(i,0,n) {
        rep(j,0,n) { 
            if (check1(p.at(i),p.at(j)) && check2(f.at(i), f.at(j)) && check3(p.at(i),p.at(j),f.at(i),f.at(j))) {cout << "Yes" << " " << i+1 << " "<< j+1 << "\n"; return 0;}
        }
    }

    cout << "No" << "\n";

    return 0;
}