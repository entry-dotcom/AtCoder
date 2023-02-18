#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, ans=0;
    cin >> n;

    rep(i,n) {
        string s;
        cin >> s;
        if (s=="For") ans++;
    }

    cout << (ans>n/2 ? "Yes":"No") << "\n";
    
    return 0;
}