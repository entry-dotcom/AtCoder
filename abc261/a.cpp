#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int L1, R1, L2, R2;
    cin >> L1 >> R1 >> L2 >> R2;

    if (R1<=(min(L2, R2)) | R2<=min(L1, R1)) cout << 0 << endl;
    else cout << (min(R1, R2) - max(L1, L2)) << endl;

    return 0;
}