#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, m, ans=0;
    cin >> n >> m;

    vector<string> s(n);

    for (int i=0; i<n; i++) cin >> s[i];

    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            bool ok=true;
            string a=s[i], b=s[j];
            for (int k=0; k<m; k++) {
                if (a[k]=='x'&&b[k]=='x') {
                    ok = false;
                    break;
                }
            }
            if (ok) ans++;
        }
    }

    cout << ans << "\n";

    return 0;
}