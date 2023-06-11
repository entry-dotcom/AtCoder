#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;
// 10進数の格桁の和
int sum_digit(int n) {int ans = 0; while(n>0) { ans += n%10; n /= 10;} return ans;}
// 大きい値
ll mod1 = 1000000007;

int main() {

    int n;
    cin >> n;
    ll ans = 1;
    vector<vector<int>> a(n,vector<int>(6));

    rep(i,0,n) rep(j,0,6) cin >> a.at(i).at(j);

    rep(i,0,n) {
        ll sm = 0;
        rep(j,0,6) {
            sm += a.at(i).at(j);
        }
        ans *= sm;
        ans %= mod1;
    }

    cout << ans%mod1 << "\n";

    return 0;
}