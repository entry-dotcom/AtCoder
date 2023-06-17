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

    int n;
    string s;
    cin >> n >> s;
    map<char,vector<int>> mp;

    rep(i,0,n) {
        if(s.at(i)=='|') mp['|'].push_back(i);
        if(s.at(i)=='*') mp['*'].push_back(i);
    }

    cout << ((mp['|'][0]<mp['*'][0] && mp['*'][0]<mp['|'][1]) ? "in":"out") << "\n";

    return 0;
}