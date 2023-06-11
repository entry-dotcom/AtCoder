#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, ans = 0;
    cin >> n;
    vector<int> a(n);
    vector<bool> called(n, false);

    rep(i,0,n) {
        cin >> a[i];
        if (!called[i]) {
            called[a[i]-1] = true;
        }
    }

    rep(i,0,n) {
        if (!called[i]) ans++;
    }
    
    cout << ans << "\n";

    rep(i,0,n) {
        if (!called[i]) {
            if (i<n-1) cout << i+1 << " ";
            else cout << i+1 << endl;
        }
    }

    return 0;
}