#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;
// 10進数の格桁の和
ll sum_digit(ll n) {ll ans = 0; while(n>0) { ans += n%10; n /= 10;} return ans;}


int main() {

    ll a, b, c;
    cin >> a >> b >> c;
    ll ans = gcd(a,gcd(b,c));

    cout << "ans:" << ans << "\n";
    cout << "a/ans: " << a/ans << "\n";
    cout << "b/ans: " << b/ans << "\n";
    cout << "c/ans: " << c/ans << "\n";
    

    cout << a/ans+b/ans+c/ans-3 << "\n";

    return 0;
}