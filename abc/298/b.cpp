#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
// 変数いろいろ
int n;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
// 2次元ベクトルの簡略化
#define vi2 vector<vector<int>>
#define vll2 vector<vector<ll>>
// 大きい値
const ll mod1 = 1000000007;
const double PI = 3.14159265358979;
const int INF = 2000000000;
// 10進数の格桁の和
int sum_digit(int n) {int ans = 0; while(n>0) { ans += n%10; n /= 10;} return ans;}
//　行列の 90 度回転
vi2 rotate(vi2 a,vi2 b) {
    vi2 na;
    int sz = a.size();
    rep(i,0,sz) { rep(j,0,sz) 
        na.at(i).at(j) = a.at(sz-1-j).at(i);  
    }
    return na;
}

// 迷路の微小座標
vector<int> dx = {-1,-1,-1,0,0,1,1,1}, dy = {-1,0,1,-1,1,-1,0,1};

bool hantei(vector<vector<int>> a, vector<vector<int>> b) {
    int n = a.size();
    bool check = true;
    rep(i,0,n) {
        rep(j,0,n) {
            if (a.at(i).at(j)==1 && b.at(i).at(j)==0) check = false;
        }
    }

    return check;
}


 
int main() {
    
    int n;
    cin >> n;
    //vector<vector<int>> a(n,vector<int>(n));
    //vector<vector<int>> b(n,vector<int>(n));
    vi2 a(n,vector<int>(n)), b(n,vector<int>(n));
    bool check;

    rep(i,0,n) rep(j,0,n) cin >> a.at(i).at(j);
    rep(i,0,n) rep(j,0,n) cin >> b.at(i).at(j);

    rep(ri,0,4) {
        check = true;
        rep(i,0,n) rep(j,0,n) if (a.at(i).at(j)==1 && b.at(i).at(j)==0) check = false;
        if (check) {cout << "Yes" << "\n"; return 0;}
        vi2 na(n,vector<int>(n));
        rep(i,0,n) { rep(j,0,n) 
                na.at(i).at(j) = a.at(n-1-j).at(i);  
        }
        a = na;
    }
    
    if (!check) cout << "No" << "\n";

    return 0;
}
