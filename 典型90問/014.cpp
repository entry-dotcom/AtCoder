#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;
// 10進数の格桁の和
int sum_digit(int n) {int ans = 0; while(n>0) { ans += n%10; n /= 10;} return ans;}

int main() {

    int n;
    cin >> n;
    vector<int> a(n), b(n);
    rep(i,0,n) cin >> a[i];
    rep(i,0,n) cin >> b[i];
    ll ans = 0;

    sort(b.begin(),b.end());
    sort(a.begin(),a.end());

    rep(i,0,n) ans += abs(a[i] - b[i]);

    cout << ans << "\n";

    return 0;
}