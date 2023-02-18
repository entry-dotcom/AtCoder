#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    ll n, m;
    cin >> n >> m;
    map<ll, ll> a;
    vector<ll> b(m);

    rep(i,0,n) {
        int a_n;
        cin >> a_n;
        a[a_n]++;

    }

    rep(i,0,m) cin >> b[i];
    rep(i,0,m) {
        if (a[b[i]]==0) {
            cout << "No" << "\n";
            return 0;
        }
        a[b[i]]--;
    }
    
    cout << "Yes" << "\n";

    return 0;
}