#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, a, b, ans = 0;
    cin >> n >> a >> b;

    for (int i=1; i<n+1; i++) {
        int num = i, kari_ans = 0;
        while(num>0) {
            kari_ans += num%10;
            num /= 10;
        }
        if (a<=kari_ans&&kari_ans<=b) ans += i;
    }

    cout << ans << "\n";

    return 0;
}