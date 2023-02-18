#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n;
    cin >> n;
    vector<string> s(n);
    rep(i,n) cin >> s[i];
    
    reverse(s.begin(),s.end());

    rep(i,n) cout << s[i] << "\n";
    
    return 0;
}