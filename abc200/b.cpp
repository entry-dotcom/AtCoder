#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    ll n, k;
    cin >> n >> k;

    rep(i,k) {
        if (n%200==0) n /= 200;
        else {
            n = n*1000+200;
        }
    }

    cout << n << "\n";

    return 0;
}