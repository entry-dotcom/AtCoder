#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    string s;
    cin >> s;
    bool flag = true;

    rep(i,0,(int)s.size()) {
        if (i%2==0) {
            if (s[i]=='L') flag = false;
        }
        else {
            if (s[i]=='R') flag = false;
        }
    }

    cout << (flag ? "Yes":"No") << "\n";

    return 0;
}