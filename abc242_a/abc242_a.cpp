#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    double A, B, C, X;
    cin >> A >> B >> C >> X;

    if (A>=X) printf("%.12lf\n", double(1));
    else if (A+1<=X & X<=B) printf("%.12lf\n", C/(B-A));
    else printf("%.12lf\n", double(0));
    return 0;
}