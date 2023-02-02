#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    ll n, t;
    cin >> n >> t;
    int a[n];
    ll sum_time = 0;

    rep(i, n) {
        cin >> a[i];
        sum_time += a[i];
    }

    ll nokori = t%sum_time;

    for (int i=0; i<n; i++) {
        if (nokori-a[i]<0) {
            cout << i+1 << " " << nokori << "\n";
            return 0;
        }
        nokori -= a[i];
    }

    return 0;
}