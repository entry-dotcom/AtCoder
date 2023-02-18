#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n;
    cin >> n;
    vector<string> s(n);
    bool ans = true;
    string s1 = "HDCS", s2 = "A23456789TJQK";
    rep(i,n) cin >> s[i];

    rep(i,n) {
        if (!count(s1.begin(),s1.end(),s[i][0])) ans = false;
        if (!count(s2.begin(),s2.end(),s[i][1])) ans = false;
    }

    rep(i,n) {
        rep(j,n) {
            if (i==j) continue;
            else {
                if (s[j]==s[i]) ans = false;
            }
        }
    }

    cout << (ans ? "Yes":"No") << "\n";

    return 0;
}