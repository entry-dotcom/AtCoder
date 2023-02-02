#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, ans = 1;
    cin >> n;
    vector<int> a(n);

    rep(i,n) cin >> a[i];

    sort(a.begin(),a.end(),greater<int>());

    rep(i,n-1) {
        if (a[i]!=a[i+1]) ans++;
    }
    
    cout << ans << "\n";

    return 0;
}