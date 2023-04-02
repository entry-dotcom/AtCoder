#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n;
    string s;
    cin >> n >> s;
    bool check = true;

    rep(i,0,n) {
        if (s[i]==s[i+1]) {
            check = false;
            break;
        }
    }

    cout << (check ? "Yes":"No") << "\n";

    return 0;
}