#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, ans=0;
    cin >> n;
    vector<int> d(n);
    rep(i,0,n) cin >> d[i];

    rep(i,0,n) {
        rep(j,i+1,n) {
            ans += d[i]*d[j];
        }
    }

    cout << ans << "\n";

    return 0;
}