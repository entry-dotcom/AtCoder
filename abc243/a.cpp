#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int v, a, b, c;
    cin >> v >> a >> b >> c;

    if (v>=a+b+c) v %= (a+b+c);
    
    if (v<a) cout << 'F' << "\n";
    else if (v<a+b) cout << 'M' << "\n";
    else cout << 'T' << "\n";
    

    return 0;
}