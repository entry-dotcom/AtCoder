#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    ll k, kari=1, i=0;
    cin >> k;
    
    while(true) {
        i++;
        kari *= i;
        if (kari>k) {
            cout << k << "\n";
            return 0;
        }
        if (kari%k==0) {
            if (kari==k){
                cout << k << "\n";
                return 0;
            }
            else {
                cout << i << "\n";
                return 0;
            }
        }
    }
    
    cout << k << "\n";

    return 0;
}