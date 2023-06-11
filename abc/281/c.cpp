#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    ll n, t, nokori_time, sum=0, sum_time=0;
    cin >> n >> t;

    vector<ll> a(n);
    rep(i,n) {
        cin >> a[i];
        sum_time += a[i];
    }

    //const ll sum_time = t%accumulate(begin(a),end(a),0ll);

    sum_time = t%sum_time;

    for (int i=0; i<n; i++) {
        if (sum+a[i]>sum_time) {
            cout << i+1 <<  " " << sum_time-sum << endl;
            return 0;
        }
        sum += a[i];
    }
    
    return 0;
}