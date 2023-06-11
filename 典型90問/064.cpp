#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;
// 10進数の格桁の和
int sum_digit(int n) {int ans = 0; while(n>0) { ans += n%10; n /= 10;} return ans;}
// 迷路の微小座標
vector<int> dx = {-1,-1,-1,0,0,1,1,1}, dy = {-1,0,1,-1,1,-1,0,1};
// 大きい値
ll mod1 = 1000000007;

int main() {

    
    int n, q;
    cin >> n >> q;
    vector<int> a(n), l(q), r(q), v(q);
    rep(i,0,n) cin >> a.at(i);
    rep(i,0,q) {
        cin >> l.at(i) >> r.at(i) >> v.at(i);
        l.at(i)--, r.at(i)--;
    }

    rep(i,0,q) {
        a.at(l.at(i)) += v.at(i);
        a.at(r.at(i)) -= v.at(i);
        ll ans = 0;
        rep(j,0,n-1) ans += abs(a.at(j) - a.at(j+1));
        cout << ans << "\n";
    }


    

    return 0;
}