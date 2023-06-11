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
    

    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i,0,h) cin >> s.at(i);

    rep(i,0,h) {
        rep(j,0,w-1) {
            if (s.at(i).at(j)=='T' && s.at(i).at(j+1)=='T') {
                s.at(i).at(j) = 'P';
                s.at(i).at(j+1) = 'C';
            }
        }
        rep(j,0,w) cout << s.at(i).at(j);
        cout << endl;
    }

    return 0;
}
