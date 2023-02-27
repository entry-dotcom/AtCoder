#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n;
    double ans=0;
    cin >> n;
    vector<double> x(5*n);

    rep(i,0,5*n) cin >> x[i];

    sort(x.begin(),x.end());

    rep(i,n,3*n+n) ans += x[i];

    //cout << ans/(3*n) << "\n";
    ans /= (3*n);
    //printf("%10\n",ans);
    cout << setprecision(10) << ans;



    return 0;
}