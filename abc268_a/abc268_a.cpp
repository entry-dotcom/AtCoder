#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int ans=1;
    vector<int> a(5);
    rep(i, 5) cin >> a[i];

    sort(a.begin(), a.end());
    rep(i, 4) {
        if (a[i] != a[i+1]) ans++;
    }

    cout << ans << "\n";

    return 0;
}