#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int T, N;
    vector<int> L(500001), R(500001), B(500001), A(500001);
    cin >> T >> N;
    L[0]=0; R[0]=0;

    for (int i=1; i<N+1; i++) cin >> L[i] >> R[i];

    //階和B[i]を求める
    for (int i=0; i<T+1; i++) B[i]=0;
    for (int i=1; i<N+1; i++) {
        B[L[i]]++;
        B[R[i]]--;
    }

    A[0]=B[0];
    //累積和A[i]を求める
    for (int i=1; i<T+1; i++) A[i] = A[i-1] + B[i];

    for (int i=0; i<T; i++) cout << A[i] << "\n";


    
    return 0;
}