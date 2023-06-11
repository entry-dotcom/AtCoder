#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;
string solve(int n) {
    rep(i,0,n+1) {
        rep(j,0,n+1) {
            int check = 4*i+7*j;
            if (check==n) return "Yes";
        }
    }
    return "No";
}

int main() {

    int n;
    cin >> n;

    cout << solve(n) << "\n";

    return 0;
}