#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int a, b;
    cin >> a >> b;

    if (max(a,b)/min(a,b)==2) cout << "Yes" << "\n";
    else cout << "No" << "\n";
    
    return 0;
}