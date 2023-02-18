#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    string S = "atcoder";
    int L, R;
    cin >> L >> R;

    string ans = S.substr(L-1, R-L+1);
    cout << ans << "\n";
    

    return 0;
}