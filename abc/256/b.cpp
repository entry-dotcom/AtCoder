#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i < (n); i++)
int main() {
    int N, P=0;
    cin >> N;
    int A[N], field[4], next_field[4]; 
    rep(i, N) cin >> A[i];
    rep(i, 4) field[i]=0;

    rep(j, N) {
        rep(i, 4) next_field[i]=0;
        field[0]=1;
        rep(i, 4) {
            if (field[i]==1) {
                if (i+A[j] >= 4) P += 1;
                else next_field[i+A[j]] = 1;
            }
        }
        rep(k, 4) field[k]=next_field[k];
    }

    cout << P << endl;

    return 0;
}