#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    string s;
    cin >> s;
    int l = s.size();
    ll res = 0, add = 26;
    for (int i=1; i<l-1+1; i++) {res += add; add*=26;}
    ll num = 0;
    for (int i=0; i<l; i++) {
        num *= 26;
        num += (s[i]-'A');
    }

    cout << res + num + 1 << "\n";
    
    return 0;
}