#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int a, b;
    cin >> a >> b;

    cout << (0<a&&a<10 && 0<b&&b<10 ? a*b:-1) << "\n";

    return 0;
}