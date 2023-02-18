#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    ll N, mx = -1;
    cin >> N;
    vector<int> odd, even;

    for (int i=0; i<N; i++) {
        ll a;
        cin >> a;
        if (a%2==0) even.push_back(a);
        else odd.push_back(a);
    }

    sort(even.rbegin(), even.rend());
    sort(odd.rbegin(), odd.rend());

    if (even.size()>1) mx = max((ll)even[0] + even[1], mx);
    if (odd.size()>1) mx = max((ll)odd[0] + odd[1], mx);
    cout << mx << "\n";

    return 0;
}