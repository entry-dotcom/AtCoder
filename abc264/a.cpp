#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    string S = "atcoder";
    int L, R;
    cin >> L >> R;

    for (int i=L-1; i<R; i++) cout << S[i];
    cout << endl;
    

    return 0;
}