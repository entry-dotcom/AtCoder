#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    string s;
    cin >> s;
    bool check=true;
    
    if (!('A'<=s.front() and s.front()<='Z')) check = false;
    if (!('A'<=s.back() and s.back()<='Z')) check = false;
    
    if (s.size()!=8) check = false;
    if (s[1]=='0') check = false;

    for (int i=1; i<7; i++) {
        if (!('0'<=s[i] and s[i]<='9')) check = false;
    }
    
    if (!check) {
        cout << "No" << "\n";
        return 0;
    }

    cout << "Yes" << "\n";
    
    

    return 0;
}