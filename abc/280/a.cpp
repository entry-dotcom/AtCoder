#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int h, w, ans=0;
    cin >> h >> w;
    string s;
    
    for (int i=0; i<h; i++) {
        cin >> s;
        for (int j=0; j<(int)s.size(); j++) {
            if (s[j]=='#') ans++;
        }
    }

    cout << ans << "\n";

    return 0;
}