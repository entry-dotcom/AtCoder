#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n=100000;
    double Answer = 0.0;

    rep(i, n) {
        double x = 1.0 * (2*i+1)/(2*n);
        double value = pow(2.0, x*x);   //f(i/n)の値
        Answer += value;
    }

    //cout << ans/double(n) << "\n";
    printf("%.14lf\n", Answer/n);
 

    return 0;
}