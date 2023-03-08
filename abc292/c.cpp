#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;
int f(int n) {
    ll res = 0;
    for (int i=1; i*i<n+1; i++) {
        if (n%i != 0) continue;
        int j = n/i;
        if (i==j) res++;
        else res += 2;
    }
    return res;
}

int main() {

    int n;
    ll ans = 0;
    cin >> n;

    rep(i,1,n) {
        ans += f(i) * f(n-i);
    }

    //cout << f(8) << "\n";
    cout << ans << "\n";

    return 0;
}