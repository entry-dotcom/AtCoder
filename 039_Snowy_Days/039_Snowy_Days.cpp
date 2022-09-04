#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int N, Q, L[100002], R[100002], X[100002], B[100002];
    cin >> N >> Q;

    for (int i=0; i<N+1; i++) B[i]=0;

    for (int i=1; i<Q+1; i++) {
        cin >> L[i] >> R[i] >> X[i];
        B[L[i]] += X[i];
        B[R[i]+1] -= X[i];
    }

    for (int i=2; i<N+1; i++) {
        if (B[i]>0) cout << "<";
        else if (B[i]==0) cout << "=";
        else if (B[i]<0) cout << ">";
    }
    cout << endl;


    

    return 0;
}