#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;
// 10進数の格桁の和
int sum_digit(int n) {int ans = 0; while(n>0) { ans += n%10; n /= 10;} return ans;}

int main() {

    ll a, b, pow18 = 1000000000000000000;
    cin >> a >> b;

    ll r = b / gcd(a,b);

    if (r>pow18/a) cout << "Large" << "\n";
    else cout << r*a << "\n";

    

    return 0;
}