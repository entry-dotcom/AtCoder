#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    string s;
    cin >> s;
    ll ans = 1, add = 0;
    int base = 1, sz = s.size();

    for (int i=1; i<sz; i++) ans *= 26;
    for (int i=0; i<sz-1; i++) {
        ans += base * s[i]+'0';
        base *= 26;
    }

    cout << ans << "\n";
    
    return 0;
}