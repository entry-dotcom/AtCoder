#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

double solve(vector<double> x, double n) {
    sort(x.begin(),x.end());
    double ans = 0.0;
    rep(i,n,4*n) {
        ans += x[i];   
    }
    return ans/(3*n);
}

int main() {

    double n;
    cin >> n;
    vector<double> x(5*n);
    rep(i,0,5*n) cin >> x[i];

    cout << setprecision(16) << solve(x, n) << "\n";



    return 0;
}