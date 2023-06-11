#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, m, ans=0;
    cin >> n >> m;
    vector<int> a(n);

    rep(i,0,n) cin >> a[i];

    rep(i,0,m) {
        int b;
        cin >> b;
        ans += a[b-1];
    }

    cout << ans << "\n";




    return 0;
}