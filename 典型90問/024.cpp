#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;
// 10進数の格桁の和
ll sum_digit(ll n) {ll ans = 0; while(n>0) { ans += n%10; n /= 10;} return ans;}


int main() {

    int n, k;
    ll cnt = 0;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    rep(i,0,n) cin >> a[i];
    rep(i,0,n) cin >> b[i];

    rep(i,0,n) cnt += abs(a[i]-b[i]);

    if (cnt>k) {cout << "No" << "\n";return 0;}
    else if (abs(k-cnt)%2!=0) {cout << "No" << "\n"; return 0;}
    else cout << "Yes" << "\n";


    

    return 0;
}