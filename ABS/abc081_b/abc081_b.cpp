#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, ans=1ll<<20;
    cin >> n;
    vector<int> a(n);
    
    rep(i,n) cin >> a[i];

    rep(i,n) {
        int now_min = 0;
        while(true) {
            if (a[i]%2==0) {
                a[i] /= 2;
                now_min++;
            }
            else break;
        }
        ans = min(ans,now_min);
    }

    cout << ans << "\n";

    return 0;
}