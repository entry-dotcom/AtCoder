#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n;
    cin >> n;
    bool check = true;
    vector<int> t(n+1), x(n+1), y(n+1);

    for (int i=1; i<n+1; i++) cin >> t[i] >> x[i] >> y[i];

    rep(i,n) {
        int dt = abs(t[i+1] - t[i]);
        int dx = abs(x[i+1] - x[i]);
        int dy = abs(y[i+1] - y[i]);
        if (dt>dx+dy) {
            if (dt%2!=(dx+dy)%2) {
                check = false;
                break;
            }
        }
        else if (dt!=dx+dy) {
            check = false;
            break;
        }
    }

    cout << (check ? "Yes":"No") << "\n";

    return 0;
}