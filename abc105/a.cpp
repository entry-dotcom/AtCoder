#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, k;
    cin >> n >> k;

    cout << (n%k==0 ? n%k:1) << "\n";

    return 0;
}