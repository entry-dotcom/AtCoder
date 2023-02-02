#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    ll n, y;
    cin >> n >> y;

    for (int i=0; i<n+1; i++) {
        for (int j=0; j<n-i+1; j++) {
            for (int k=0; k<n-i-j+1; k++) {
                if (i*10000+j*5000+1000*k==y&&i+j+k==n) {
                    cout << i << " " << j << " " << k << "\n";
                    return 0;
                }
            }
        }
    }
    
    cout << -1 << " " << -1 << " " << -1 << "\n";

    return 0;
}