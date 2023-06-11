#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    string s;
    cin >> s;

    rep(i,1,(int)s.size()/2+1) {
        swap(s[2*i-2],s[2*i-1]);
    }

    cout << s << "\n";

    return 0;
}