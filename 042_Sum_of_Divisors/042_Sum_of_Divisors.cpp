#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;


int main() {

    ll F[1000009], ans=0;
    ll N;
    cin >> N;    
    
    for (int i=1; i<N+1; i++) F[i]=0;

    for (int i=1; i<N+1; i++) {
        for (int j=i; j<N+1; j+=i) F[j]++;
    }

    for (int i=1; i<N+1; i++) ans += 1LL * i * F[i];
    cout << ans << endl;

    return 0;
}