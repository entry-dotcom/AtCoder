#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    string s;
    cin >> s;
    int ans=0;

    for (int i=0; i<s.size(); i++) {
        if (s[i]=='v') ans++;
        else ans+=2;
    }
    
    cout << ans << "\n";
    
    return 0;
}