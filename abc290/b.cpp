#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, k, cnt;
    string s;
    
    cin >> n >> k >> s;
    cnt = k;

    rep(i,0,n) {
        if (s[i]=='o'&&cnt>0) {
            cnt--;
        }
        else {
            s[i] = 'x';
            //cnt--;
        }
    }
    
    cout << s << "\n";

    return 0;
}