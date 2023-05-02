#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;
// 10進数の格桁の和
int sum_digit(int n) {int ans = 0; while(n>0) { ans += n%10; n /= 10;} return ans;}

int main() {

    int n, q;
    cin >> n;
    vector<int> c(n+1), p(n+1), sum1(n+1), sum2(n+1);
    rep(i,1,n+1) cin >> c[i] >> p[i]; 
    cin >> q;
    vector<int> l(q+1), r(q+1);
    rep(i,1,q+1) cin >> l[i] >> r[i];

    rep(i,1,n+1) {
        sum1[i] = sum1[i-1];
        sum2[i] = sum2[i-1];
        if (c[i]==1) sum1[i] += p[i];
        if (c[i]==2) sum2[i] += p[i];
    }

    rep(i,1,q+1) {
        ll ans1 = sum1[r[i]] - sum1[l[i]-1];
        ll ans2 = sum2[r[i]] - sum2[l[i]-1];
        cout << ans1 << " " << ans2 << "\n";
    }
    

    return 0;
}