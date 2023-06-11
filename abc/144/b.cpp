#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n;
    cin >> n;

    rep(i,1,10) {
        if (n%i==0 && n/i<10) {
            cout << "Yes" << "\n";
            return 0;
        }
    }

    cout << "No" << "\n";

    return 0;
}