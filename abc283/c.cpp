#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    ll cnt = 0;
    string s;
    cin >> s;
 
    while(!empty(s)) {
        char back = s.back();
        s.pop_back();
        if (s.back()=='0'&& back=='0') s.pop_back();
        cnt++;
    }
    
    cout << cnt << "\n";

    return 0;
}