#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;
// ABC081A-Placing Marbles

int main() {

string s;
cin >> s;
int ans = 0;

rep(i,s.size()) {
    if (s[i]=='1') ans++;
}

cout << ans << "\n";

}