#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
// 大きい値
const ll mod1 = 1000000007;
const double PI = 3.14159265358979;
const int INF = 2000000000;
// 10進数の格桁の和
int sum_digit(int n) {int ans = 0; while(n>0) { ans += n%10; n /= 10;} return ans;}
// 迷路の微小座標
vector<int> dx = {-1,-1,-1,0,0,1,1,1}, dy = {-1,0,1,-1,1,-1,0,1};
 
int main() {

    string s;
    cin >> s;
    const int n = 8;
    bool check = true;
    map<char,vector<int>> mp;

    rep(i,0,n) mp[s.at(i)].push_back(i);

    check &= mp['B'][0] % 2 != mp['B'][1] % 2;
    check &= (mp['R'][0] < mp['K'][0]) & (mp['K'][0] < mp['R'][1]);

    cout <<(check ? "Yes":"No") << "\n";

    return 0;
}
