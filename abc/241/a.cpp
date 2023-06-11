#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    map<int,int> a;
    rep(i,10) {
        int a_i;
        cin >> a_i;
        a[i] = a_i;
    }

    int index = 0;
    int ans;

    rep(i,3) {
        ans = a[index];
        index = ans;
    }
    
    cout << ans << "\n";

    return 0;
}