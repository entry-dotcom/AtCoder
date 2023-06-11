#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;
const int INF = 2000000000;
// 10進数の格桁の和
int sum_digit(int n) {int ans = 0; while(n>0) { ans += n%10; n /= 10;} return ans;}

int main() {

    string s;
    cin >> s;
    ll ans = 0, n = (int)s.size();

    for (int bit=0; bit<(1<<(n-1)); bit++) {
        ll sm = 0, a = s[0] - '0';
        rep(i,0,n-1) {
            if (bit & (1<<i)) {
                sm += a;
                a = 0;
            }
            a = a*10+s[i+1]-'0';
        }
        sm += a;
        ans += sm;
    }

    cout << ans << "\n";

    return 0;
}