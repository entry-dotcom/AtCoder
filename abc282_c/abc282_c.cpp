#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, cnt=0;
    string s;
    cin >> n >> s;

    for (int i=0; i<n; i++) {
        if (s[i]=='"') cnt++;
        if (cnt%2==0) {
            if (s[i]==',') cout << '.';
            else cout << s[i];
        }
        else {
            cout << s[i];
        }
        
    }

    cout << endl;
    
    return 0;
}