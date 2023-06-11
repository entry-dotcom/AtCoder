#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    ll n;
    cin >> n;
    vector<ll> res = {0};
    
    rep(i,0,60) {
        if (n&(1ll<<i)) {
            int sz = res.size();
            rep(j,0,sz) {
                res.push_back(res[j] | (1ll<<i));
            }
        }
    }

    sort(res.begin(),res.end());
    for (auto&nx:res) cout << nx << "\n";

    return 0;
}