#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n;
    ll ans = 1e18;
    cin >> n;
    vector<int> a(n);

    rep(i,n) {
        ll a, cnt=0;
        cin >> a;
        while(a%2==0) {
            a /= 2;
            cnt++;
        }
        ans = min(ans,cnt);
    }

    cout << ans << "\n";

    return 0;
}