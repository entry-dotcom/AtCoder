#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    string s;
    int ans=0;
    cin >> s;

    rep(i,10000) {
        vector<bool> flag(10,false);
        int x = i;
        rep(k,4) {
            flag[x%10] = true;
            x /= 10;
        }
        bool flag2 = true;
        rep(j,10) {
            if (s[j]=='o' && !flag[j]) flag2 = false;
            if (s[j]=='x' && flag[j]) flag2 = false;
        }
        ans += flag2;
    }

    cout << ans << "\n";

    return 0;
}