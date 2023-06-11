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
    
    int n, d;
    cin >> n >> d;
    vector<int> t(n);

    rep(i,0,n) cin >> t.at(i);

    rep(i,0,n-1) {
        if ((t.at(i+1)-t.at(i))<=d) {cout << t.at(i+1) << "\n"; return 0;}
    }

    cout << -1 << "\n";

    return 0;
}
