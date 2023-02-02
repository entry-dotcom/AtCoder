#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    string s,t;
    cin >> s >> t;

    for (int i=0; (int)s.size(); i++) {
        if (s[i]!=t[i]) {
            cout << i+1 << "\n";
            return 0;
        }
    }
    
    cout << (int)s.size()+1 << "\n";

    return 0;
}