#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n;
    cin >> n;
    map<int,int> a;
    set<int> num;
    ll ans = 0;

    rep(i,0,n) {
        int a_i;
        cin >> a_i;
        num.insert(a_i);
        a[a_i]++;
    }

    while(!num.empty()) {
        int num1 = *begin(num);
        num.erase(num1);
        ans += a[num1]/2;
    }

    cout << ans << "\n";

    return 0;
}