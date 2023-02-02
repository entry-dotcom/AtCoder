#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    string s;
    int n, cnt=0;
    cin >> n >> s;

    rep(i, n) {
        if (s[i]=='"') {
            cnt++;
        }
        if (cnt%2==0) {
            if (s[i]==',') s[i]='.';
        }
        cout << s[i];
    }
    cout << endl;
    
    return 0;
}