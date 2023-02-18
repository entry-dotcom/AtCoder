#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    string s;
    cin >> s;

    set<int> set_int;
    set<char> set_char;
    
    bool b=true;
    rep(i, 3) {
        if (isalpha(s[i])) {
            b=false;
            break;
        }
    }
    int s2 = atoi(s.c_str());
    if (!b) cout << "error" << "\n";
    else cout << int(s2)*2 << "\n"; 

    return 0;
}