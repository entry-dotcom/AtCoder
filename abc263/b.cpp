#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;
int N, P[51], dp[51];

int main() {
    
    cin >> N;
    for (int i=1; i<N; i++) {cin >> P[i]; P[i]--;}

    int k = N - 1;
    int ans=0;

    while(k!=0) {
        k = P[k];
        ans++;
    }

    
    cout << ans << "\n";
    
    return 0;
}