#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;
// 10進数の格桁の和
int sum_digit(int n) {int ans = 0; while(n>0) { ans += n%10; n /= 10;} return ans;}

int main() {

    double t, l, x, y, q;
    cin >> t >> l >> x >> y >> q;

    rep(i,0,q) {
        double e;
        cin >> e;
        double ans, theta;
        theta = 2*PI*e/t;
        double kari_y = -l/2*sin(theta), kari_z = l/2-l/2*cos(theta);
        ans = atan2(kari_z,sqrt(x*x+(kari_y-y)*(kari_y-y)));
        printf("%.12f\n",ans*180/PI);
    }

    return 0;
}