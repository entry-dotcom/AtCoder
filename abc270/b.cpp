#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int x, y, z;
    cin >> x >> y >> z;
    
    if (y<0) {
        x=-x;
        y=-y;
        z=-z;
    }

    if (x<y) cout << abs(x) << "\n";
    else {
        if (y<z) cout << -1 << "\n";
        else cout << abs(z)+2*abs(z-x) << "\n";
    }

    return 0;
}