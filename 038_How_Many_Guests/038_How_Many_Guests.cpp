
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int N, Q, L[100001], R[100001], A[100001], B[100001];
    cin >> N >> Q;
    for (int i=1; i<N+1; i++) cin >> A[i];
    for (int i=1; i<Q+1; i++) cin >> L[i] >> R[i];
    B[0]=0;

    for (int i=1; i<N+1; i++) B[i] = A[i] + B[i-1];

    //答えを出力
    for (int i=1; i<Q+1; i++) cout << B[R[i]]-B[L[i]-1] << "\n";

    return 0;
}