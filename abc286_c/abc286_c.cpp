#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    ll n, a, b;
    string s;
    cin >> n >> a >> b >> s;
    s += s;
    cout << s << "\n";
    ll ans = 1ll<<10;
    

    for(int i = 0; i < n; i++) {
        ll tmp = a*i;
        for(int j = 0; j < n/2; j++) {
            int l = i+j;
            int r = i+n-1-j;
            if (s[l]!=s[r]) tmp += b;
        }
        ans = min(ans,tmp);
    }
    
    cout << ans << "\n";

    return 0;
}