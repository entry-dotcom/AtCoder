#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int a,b;
    cin >> a >> b;

    cout << (a%3==0 || b%3==0 || (a+b)%3==0 ? "Possible":"Impossible") << "\n";
    
    return 0;
}