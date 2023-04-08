#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    string s;
    cin >> s;

    if (s[0]=='S') cout << "Cloudy" << "\n";
    else if (s[0]=='C') cout << "Rainy" << "\n";
    else cout << "Sunny" << "\n";

    return 0;
}