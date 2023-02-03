#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int N, a[1000001];
    cin >> N;
    a[1] = 1;
    a[2] = 1;
    for (int i=3; i<N+1; i++) a[i] = (a[i-1] + a[i-2]) % 1000000007;
    cout << a[N] % 1000000007 << endl;

    return 0;
}