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
vector<int> dx = {-1,0,1,-1,1,-1,0,1}, dy = {-1,-1,-1,0,0,1,1,1};

int main() {

    string s, t, at = "atcoder@";
    cin >> s >> t;
    int n = s.size();
    vector<pair<int,int>> atc(2);

    map<char,int> s_num, t_num;

    rep(i,0,n) {
        if (!at.find(s.at(i))) s_num[s.at(i)]++;
        if (!at.find(t.at(i))) t_num[t.at(i)]++;
        if (at.find(s.at(i))) {
            if (s.at(i)=='@') atc.at(0).first++;
            else atc.at(0).second++;
        }
        if (at.find(t.at(i))) {
            if (t.at(i)=='@') atc.at(1).first++;
            else atc.at(1).second++;
        }
    }

    if (!s.find('@') && !t.find('@')) {
        if (s_num==t_num && atc.at(0).first==atc.at(1).first) {cout << "Yes" << "\n"; return 0;}
    }
    else {
        //if (s_num!=t_num) {cout << "No" << "\n"; return 0;}
        if (atc.at(1).first < atc.at(1).first) {
            while(atc.at(0).second!=atc.at(1).second) {
                atc.at(0).first--;
                atc.at(0).second++;
            }
        } else {
            while(atc.at(0).second!=atc.at(1).second) {
                atc.at(1).first--;
                atc.at(1).second++;
            }
        }
    }
    
    cout << (atc.at(1).first<0 || atc.at(0).first<0 ? "No":"Yes") << "\n";

    return 0;
}