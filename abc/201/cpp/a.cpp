#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    vector<int> a(3);
    a[0] = a1; a[1] = a2; a[2] = a3;

    sort(a.begin(),a.end());

    cout << (a[2]-a[1]==a[1]-a[0]? "Yes":"No" ) << "\n";

    return 0;
}