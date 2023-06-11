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

    int n, l;
    cin >> n >> l;
    vector<ll> dp(n+1);
    dp.at(0) = 1;

    rep(i,1,n+1) {
        if (l>i) dp.at(i) = 1;
        else dp.at(i) = dp.at(i-1)%mod1 + dp.at(i-l)%mod1;
    }

    cout << dp.at(n)%mod1 << "\n";



    return 0;
}