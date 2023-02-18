#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n;
    cin >> n;
    vector<ll> s(n), a(n);

    for (int i=0; i<n; i++) cin >> s[i];

    a[0] = s[0];

    for (int i=1; i<n; i++) a[i] = s[i] - s[i-1];
    for (int i=0; i<n; i++) cout << a[i] << " ";
    cout << endl;

    return 0;
}