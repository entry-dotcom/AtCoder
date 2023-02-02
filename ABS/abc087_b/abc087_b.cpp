#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

int a, b, c, x, ans = 0;
cin >> a >> b >> c >> x;

rep(i,a+1) {
    rep(j,b+1) {
        rep(k,c+1) {
            if (i*500+j*100+k*50==x) ans++;
        }
    }
}

cout << ans << "\n";

return 0;
}