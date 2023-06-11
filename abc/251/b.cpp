#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i=0; i < (n); i++)

int main() {

    int N, W, ans=0;
    cin >> N >> W;
    int A[N];
    set<int> B;

    rep(i, N) cin >> A[i];

    for (int i=0; i<N; i++) {
        if (B.count(A[i])) continue;
        if (A[i]<=W) {
            ans++;
            B.insert(A[i]);
        } 
    }

    for (int i=0; i<N; i++) { 
        for (int j=i+1; j<N; j++) {
            if (B.count(A[i]+A[j])) continue;
            if (A[i]+A[j]<=W) {
                ans++;
                B.insert(A[i]+A[j]);
            };
        }
    }

    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++) { 
            for (int k=j+1; k<N; k++) {
                if (B.count(A[i]+A[j]+A[k])) continue;
                if (A[i]+A[j]+A[k]<=W) {
                    ans++;
                    B.insert(A[i]+A[j]+A[k]);
                };
            }
         }
    }

    cout << ans << endl;

    return 0;
}