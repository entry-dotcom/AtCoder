#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    string s, t;
    cin >> s >> t;

    for (int i=0; i<s.size(); i++) {
        if (s[i]!=t[i]) {
            cout << "No" << endl; 
            return 0;
        }
    }

    cout << "Yes" << endl;
    

    return 0;
}