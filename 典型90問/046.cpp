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
    vector<int> a(n), b(n), c(n);
    rep(i,0,n) cin >> a.at(i);
    rep(i,0,n) cin >> b.at(i);
    rep(i,0,n) cin >> c.at(i);
    vector<int> a_46(46), b_46(46), c_46(46);
    rep(i,0,n) {
        a_46.at(a.at(i)%46)++;
        b_46.at(b.at(i)%46)++;
        b_46.at(c.at(i)%46)++;
    }

    ll ans = 0;

    rep(i,0,46) {
        rep(j,0,46) {
            rep(k,0,46) {
                if ((i+j+k)%46==0) {
                    ans += (a_46.at(i)*b_46.at(j)*c_46.at(k));
                }
            }
        }
    }

    cout << ans << "\n";

    return 0;
}