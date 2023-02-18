#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {

    int n, h[100001], dp[100001];
    cin >> n;

    rep(i, n) cin >> h[i+1];

    for (int i=1; i<n+1; i++) {
        if (i==1) dp[i]=0;
        if (i==2) dp[i]=abs(h[i-1]-h[i]);
        if (i>=3) {
            int v1 = dp[i-1]+abs(h[i-1]-h[i]);
            int v2 = dp[i-2]+abs(h[i-2]-h[i]);
            dp[i]=min(v1, v2);
        }

    }

    cout << dp[n] << endl;

    return 0;
}