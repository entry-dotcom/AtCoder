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
    
    int n;
    string s;
    cin >> n >> s;
    bool good = false, no = true;

    rep(i,0,n) {
        if (s.at(i)=='o') good = true;
        if (s.at(i)=='x') no = false;
    }

    cout << (good && no ? "Yes":"No") << "\n";

    return 0;
}
