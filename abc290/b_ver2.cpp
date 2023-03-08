#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, k;
    string s;
    cin >> n >> k >> s;
    
    rep(i,0,n) {
        if (s[i]=='o') {
            if (k<1) s[i] = 'x';
            k--;
        }
    }

    cout << s << "\n";

    return 0;
}