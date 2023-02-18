#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ll N, ans=0;
    cin >> N;
    ll A[N+1];

    for (int i=1; i<N+1; i++) cin >> A[i];

    for (int i=1; i<N+1; i++) {
        for (int j=i+1; j<N+1; j++) {
            for (int k=j+1; k<N+1; k++) {
                for (int x=k+1; x<N+1; x++) {
                    for (int y=x+1; y<N+1; y++) {
                        if (A[i]+A[j]+A[k]+A[x]+A[y]==1000) ans++;
                    }
                }
            }
        }
    }
    
    cout << ans << endl;
    return 0;
}