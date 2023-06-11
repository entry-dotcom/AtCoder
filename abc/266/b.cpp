#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    ll N, mod=0;
    cin >> N;

    mod = N%998244353;
    if (mod<0) cout << mod+998244353 << "\n";
    else cout << mod << "\n";
    
    

    return 0;
}