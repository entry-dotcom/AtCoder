#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;
// 10進数の格桁の和
ll sum_digit(ll n) {ll ans = 0; while(n>0) { ans += n%10; n /= 10;} return ans;}


int main() {

    ll n, p, q;
    cin >> n >> p >> q;
    ll ans = 0;
    vector<ll> a(n);

    rep(i,0,n) cin >> a[i];

    rep(i,0,n) {
        rep(j,i+1,n) {
            rep(k,j+1,n) {
                rep(l,k+1,n) {
                    rep(m,l+1,n) {
                        if ((a[i]%p*a[j]%p*a[k]%p*a[l]%p*a[m]%p)==q) ans++;
                    }
                }
            }
        }
    }

    cout << ans << "\n";

    return 0;
}