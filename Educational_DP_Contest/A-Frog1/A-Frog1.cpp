#include<bits/stdc++.h>
using namespace std;

int main() {

    int N, H[100009], dp[100009];

    cin >> N;
    for (int i=1; i<=N+1; i++) cin >> H[i];

    for (int i=1; i<N+1; i++) {
        if (i==1) dp[i] = 0;
        if (i==2) dp[i] = abs(H[i-1] - H[i]);
        if (i>=3) {
            int v1 = dp[i-1] + abs(H[i-1] - H[i]);
            int v2 = dp[i-2] + abs(H[i-2] - H[i]);
            dp[i] = min(v1, v2);
        }
    }
    cout << dp[N] << endl;

    return 0;
}