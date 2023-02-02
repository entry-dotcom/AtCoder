#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, a, b, ans = 0;
    cin >> n >> a >> b;

    for (int i=1; i<n+1; i++) {
        int digit = i, kari = 0;
        while(digit>0) {
            kari += digit%10;
            digit /= 10;
        }
        if (a<=kari && kari<=b) ans += i;
    } 

    cout << ans << "\n";

    return 0;
}