#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int Y;
    cin >> Y;

    if (Y%4==0) cout << (Y+2) << endl;
    else if (Y%4==1) cout << (Y+1) << endl;
    else if (Y%4==2) cout << Y << endl;
    else if (Y%4==3) cout << (Y+3) << endl;

    return 0;
}