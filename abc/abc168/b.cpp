#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int k;
    string s;

    cin >> k >> s;

    if ((int)s.size()<k+1) cout << s << "\n";
    else cout << s.substr(0,k)+"..." << "\n";

    return 0;
}