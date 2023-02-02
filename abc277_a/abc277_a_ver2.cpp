#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, x;
    cin >> n >> x;
    vector<int> p(n);
    rep(i,n) cin >> p[i];

    rep(i,n) {
        if (p[i]==x) {
            cout << i+1 << "\n";
            return 0;
        }
    }
    
    return 0;
}