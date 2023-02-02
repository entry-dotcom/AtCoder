#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int a, b, w;
    cin >> a >> b >> w;
    int mn = 1e9, mx = 0;

    for (int n=1; n<1000*1000+1; n++) {
        if (a*n<=1000*w && 1000*w<=b*n) {
            mn = min(mn,n);
            mx = max(mx,n);
        }
    }

    if (mx==0) cout << "UNSATISFIABLE" << "\n";
    else cout << mn << " " << mx << "\n";

    return 0;
}