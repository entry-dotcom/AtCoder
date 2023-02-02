#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;
// ABC081A-Placing Marbles

int main() {

int a, b, c, x, ans = 0;
cin >> a >> b >> c >> x;
a++, b++, c++;

rep(i,a) {
    rep(j,b) {
        rep(k,c) {
            if (i*500+j*100+k*50==x) ans++;
        }
    }
}

cout << ans << "\n";

return 0;
}