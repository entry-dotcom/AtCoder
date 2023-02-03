#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, k, ans = 0;
    cin >> n >> k;
    vector<int> l(n);

    rep(i,n) cin >> l[i];
    sort(l.begin(), l.end(),greater<int>());

    rep(i,k) {
        ans += l[i];
    }
    
    cout << ans << "\n";

    return 0;
}