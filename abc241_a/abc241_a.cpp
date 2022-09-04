#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int ans, a[10];
    rep(i, 10) cin >> a[i];

    rep(i, 10) {
        if (a[i]!=0) continue;
        else {
            ans = 0;
            rep(j, 3) {
                ans = a[ans];
            }
            cout << ans <<"\n";
            return 0;
        }
    } 
    

    return 0;
}