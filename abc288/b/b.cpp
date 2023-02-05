#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, k;
    cin >> n >> k;
    vector<string> s(n), ans(k);

    rep(i,n) {
        cin >> s[i];
        if (i<k) ans[i] = s[i];
    }

    sort(ans.begin(), ans.end());

    rep(i,k) cout << ans[i] << "\n";
    
    
    return 0;
}