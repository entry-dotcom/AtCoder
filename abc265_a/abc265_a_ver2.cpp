#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int X, Y, N, ans=0;
    cin >> X >> Y >> N;

    if (3*X > Y) ans = (N/3)*Y + (N%3) * X;
    else ans = X * N;

    cout << ans << endl;

    return 0;
}