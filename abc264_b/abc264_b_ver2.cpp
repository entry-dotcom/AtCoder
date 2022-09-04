#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int R, C;
    cin >> R >> C;

    vector<string> data = {
        "***************",
        "*-------------*",
        "*-***********-*",
        "*-*---------*-*",
        "*-*-*******-*-*",
        "*-*-*-----*-*-*",
        "*-*-*-***-*-*-*",
        "*-*-*-*-*-*-*-*",
        "*-*-*-***-*-*-*",
        "*-*-*-----*-*-*",
        "*-*-*******-*-*",
        "*-*---------*-*",
        "*-***********-*",
        "*-------------*",
        "***************",
    };

    
    R--; C--;
    if (data[R][C]=='*') cout << "black"  << "\n";
    else cout << "white" << "\n";

    return 0;
}