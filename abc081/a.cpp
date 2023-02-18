#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    string s;
    cin >> s;

    if (s=="100" || s=="010" || s=="001") cout << 1 << "\n";
    else if (s=="110" || s=="101" || s=="011") cout << 2 << "\n";
    else if (s=="111") cout << 3 << "\n";
    else cout << 0 << "\n";
    
    return 0;
}