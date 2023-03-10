#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;
int solve(int n) {
    ll res = 0;
    for (int i=1; i*i<n+1; i++) {
        if (!(n%i==0)) continue;
        else {
            if (n/i==i) res++;
            else res+=2;
            
        }    
    }
    return res;
}


int main() {

    int n;
    cin >> n;
    ll ans = 0;

    rep(i,1,n) {
        ans += solve(i) * solve(n-i);
    }

    cout << ans << "\n";


    return 0;
}