#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
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

    int n;
    cin >> n;

    if (n<=1000-1) cout << n << "\n";
    else if (1000<n && n<10000-1) cout << n/10*10 << "\n";
    else if (10000<n && n<100000-1) cout << n/100*100 << "\n";
    else if (100000<n && n<1000000-1) cout << n/1000*1000 << "\n";
    else if (1000000<n && n<10000000-1) cout << n/10000*10000 << "\n";
    else if (10000000<n && n<100000000-1) cout << n/100000*100000 << "\n";
    else cout << n/1000000*1000000 << "\n";


    return 0;
}