#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    string s, t;
    cin >> s >> t;

    for (int i=0; i<(int)s.size()-(int)t.size()+1; i++) {
        string kari = s.substr(i,(int)t.size());
        if (kari==t) {
            cout << "Yes" << "\n";
            return 0;
        }
    }
    
    cout << "No" << "\n";

    return 0;
}