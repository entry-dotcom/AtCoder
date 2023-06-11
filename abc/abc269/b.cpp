#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    vector<string> s(10);
    int a, b, c, d;
    a = c = 1e9;
    b = d = -1;

    rep(i,0,10) cin >> s[i];
    

    rep(i,0,10) {
        rep(j,0,10) {
            if (s[i][j]=='#') {
                a = min(a,i);
                b = max(b,i);
                c = min(c,j);
                d = max(d,j);
            }
        }
    }
    a++, b++, c++, d++;
    cout << a << " " << b << "\n";
    cout << c << " " << d << "\n";

    return 0;
}