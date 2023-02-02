#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, alice = 0, bob = 0;
    cin >> n;
    vector<int> a(n);

    rep(i,n) cin >> a[i];

    sort(a.begin(),a.end(),greater<int>());

    rep(i,n) {
        if (i%2==0) alice += a[i];
        else bob += a[i];
    }

    cout << alice - bob << "\n";
    
    return 0;
}