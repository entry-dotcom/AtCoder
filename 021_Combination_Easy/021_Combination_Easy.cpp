#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


ll p1(ll n) {
    if (n==0) return 1;
    ll s = p1(n-1); return s*n;
}

ll p2(ll n, ll i) {
    if (n==i) return n-i+1;
    i++;
    ll s = p2(n-1,i);
    return s*n;
}

int main() {

    int n,r;
    ll ans_1=1, ans_2=1;
    cin >> n >> r;

    for (int i=n; i>n-r; i--) ans_1 *= i;
    for (int i=r; i>0; i--) ans_2 *= i;

    cout << ans_1/ans_2 << endl;

    return 0;
}