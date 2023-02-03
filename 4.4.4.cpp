#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    ll ans=0;
    int i=1;

    while(true) {
        if (ans<2) {ans += 1/i; i++;}
        else {
            cout << i << "\n";
            break;
        }
    }    

    return 0;
}