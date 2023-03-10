#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    string s, t="";
    cin >> s;

    rep(i,0,(int)s.size()) t += toupper(s[i]);

    cout << t << "\n";

    return 0;
}