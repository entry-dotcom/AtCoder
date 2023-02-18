#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int a, b, w;
    cin >> a >> b >> w;
    w *= 1000;

    int upper = floor((double)w/a), lower = ceil((double)w/b);

    if (lower>upper) cout << "UNSATISFIABLE" << "\n";
    else cout << lower << " " << upper << "\n";

    return 0;
}