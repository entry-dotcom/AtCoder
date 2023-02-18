#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    if (a==b) cout << c << "\n";
    else if (a==c) cout << b << "\n";
    else if (b==c) cout << a << "\n";
    else cout << 0 << "\n";
    
    return 0;
}