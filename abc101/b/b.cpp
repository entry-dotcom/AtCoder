#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, ans=0;
    cin >> n;
    int n_t = n;

    while(n_t>0) {
        ans += n_t%10;
        n_t /= 10;
    }
    //cout << ans << "\n";
    cout << (n%ans==0 ? "Yes":"No") << "\n";

    return 0;
}