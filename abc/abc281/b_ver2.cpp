#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    string s;
    cin >> s;

    bool check = true;
    
    if ((int)s.size()!=8) check = false;
    if (!('A'<=s[0] & s[7]<='Z')) check = false;
    for (int i=1; i<7; i++) {
        if (!('0'<=s[i] & s[i]<='9')) check = false;
    }
    if (s[1]=='0') check = false;

    cout << (check ? "Yes":"No") << "\n";

    return 0;
}