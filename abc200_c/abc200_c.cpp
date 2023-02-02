#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    ll n, cnt=0;
    cin >> n;
    vector<ll> a(n);
    vector<ll> ans(200,0);
    rep(i,n) {
        cin >> a[i];
        ans[(a[i]%200)]++;
    }


    for (int i=0; i<200; i++) {
        cnt += (ans[i]*(ans[i]-1))/2;
    }


    cout << cnt << "\n";

    return 0;
}