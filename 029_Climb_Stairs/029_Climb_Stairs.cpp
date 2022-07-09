#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {

    int N, dp[46];
    cin >> N;

    for (int i=0; i<N+1; i++) {
        if (i<=1) dp[i]=1;
        else dp[i]=dp[i-1]+dp[i-2];
    }

    cout << dp[N] << endl;

    return 0;
}