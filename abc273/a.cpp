#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;
int saiki(int N) {
    if (N==0) return 1;
    int s = saiki(N-1);
    return N*s;
}

int main() {

    int N;
    cin >> N;
    cout << saiki(N) << "\n";

    return 0;
}