#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    string s;
    cin >> s;

    rep(i,0,s.size()) {
        s[i] = toupper(s[i]);
    }
    
    cout << s << "\n";

    return 0;
}