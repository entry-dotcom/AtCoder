#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    string s;
    cin >> s;

    rep(i,s.size()) {
        if (s[i] == '0') s[i] = '1';
        else s[i] = '0';
    }

    cout << s << "\n";
}