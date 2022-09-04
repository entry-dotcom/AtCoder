#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int X, Y, N, ans=0;
    cin >> X >> Y >> N;

    while(N>0){
        if (N>=3) {
            if (Y <= 3*X) {
                N -= 3;
                ans += Y;
            }
            else {
                N -= 1;
                ans += X;
            }
        }
        else {
            N -= 1;
            ans += X;
        }
    }

    cout << ans << endl;

    return 0;
}