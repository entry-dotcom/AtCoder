#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    ll x, k, m;
    cin >> x >> k;
    ll ans=x;


    ll ten = 1;
    for (int i=0; i<k; i++) {
        x /= ten;
        m = x%10;
        if (m>4) x += (10-m);
        else x -= m;
        x *= ten;
        ten *= 10;
    }
    
    cout << x << "\n";

    return 0;
}