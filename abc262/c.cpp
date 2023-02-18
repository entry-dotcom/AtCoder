#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int N;
    cin >> N;
    int a[N], same=0;
    rep(i, N) {
        cin >> a[i];
        a[i]--;
        if (a[i]==i) same++;
    }

    ll ans = (ll) same*(same-1)/2;
    for (int i=0; i<N; i++) {
        if (a[i]>i & a[a[i]]==i) ans++;
    }

    cout << ans << "\n";

    return 0;
}