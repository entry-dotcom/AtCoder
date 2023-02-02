#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    ll n, y, l = -1;
    cin >> n >> y;

    for (int i=0; i<n+1; i++) {
        for (int j=0; j<n+1; j++) {
            int k = n - i - j;
            if (10000*i+5000*j+1000*k==y) {
                if (i>-1 && j>-1 && k>-1) {
                    cout << i << " " << j << " " << k << "\n";
                    return 0;
                }
                
            }
        }
    }
    
    cout << "-1 -1 -1" << "\n";

    return 0;
}