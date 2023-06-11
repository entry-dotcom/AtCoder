#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int N;
    cin >> N;
    int ans(N);
    vector<int> P(N);

    for (int i=0; i<N; i++) {
        cin >> P[i];
    }
    P_2 = P:

    sort(P_2.begin(),P_2.end());

    for (int i=0; i<P.size(); i++) {
        if (P[i]=P_2[i]) {
            ans[i] = P[i];
        }
    }

    return 0;
}