#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    ll n, a, b;
    string s;
    cin >> n >> a >> b >> s;
    //s += s;
    ll ans = 1e18;

    rep(ai,n) {
        ll now = a*ai;
        string t = s;
        rotate(t.begin(),t.begin()+ai,t.end());
        for (int l=0, r=n-1; l<r; l++, r--) {
            if (t[l]!=t[r]) now += b;
        }
        ans = min(ans,now);
        cout << ai << " " << t << "\n";
    }

    cout << ans << "\n";

    return 0;
}