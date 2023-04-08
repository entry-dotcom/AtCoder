#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, ans=1;
    string s;
    cin >> n >> s;

    rep(i,0,n-1) {
        if (s[i]!=s[i+1]) ans++;
    }
    cout << ans << endl;

    return 0;
}