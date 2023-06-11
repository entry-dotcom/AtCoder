#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, k, ans = 0;
    cin >> n >> k;
    //vector<int> h(n);

    rep(i,0,n) {
        int h;
        cin >> h;
        if (h>=k) ans++;
    }

    cout << ans << "\n";

    return 0;
}