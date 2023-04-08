#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int a, b;
    cin >> a >> b;

    cout << (a-2*b>-1 ? a-2*b:0 ) << "\n";

    return 0;
}