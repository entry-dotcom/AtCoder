#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    ll N, M, T, k=0;
    cin >> N >> M >> T;
    ll A[N], X[M], Y[M];
    for (int i=1; i<N; i++) cin >> A[i];
    rep(i, M) cin >> X[i] >> Y[i];
    bool b = true;
    A[0]=0;

    for (int i=1; i<N+1; i++) {
        if (T-A[i-1] <= 0) {
            cout << "No" << "\n";
            return 0;
        }
        T -= A[i-1];
        if (i==X[k]) {
            T += Y[k];
            k++;
        }
    }

    cout << "Yes" << "\n";
    
    return 0;
}