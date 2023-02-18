#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    string n;
    cin >> n;
    reverse(n.begin(),n.end());

    if (n[0]=='2' || n[0]=='4' || n[0]=='5' || n[0]=='7' || n[0]=='9') cout << "hon" << "\n";
    else if (n[0]=='0' || n[0]=='1' || n[0]=='6' || n[0]=='8') cout << "pon" << "\n";
    else cout << "bon" << "\n";





    return 0;
}