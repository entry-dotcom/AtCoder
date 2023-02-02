#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    string s;
    cin >> s;
    ll sz = s.size();

    reverse(s.begin(),s.end());
    
    while(sz>0) {
        if (s[2]=='e') {
            string s_t = s.substr(0,5);
            s.erase(s.begin(),s.begin()+5);
            sz -= 5;
            if (s_t!="maerd") {
                cout << "NO" << "\n";
                return 0;
            }
        }
        else if (s[2]=='m') {
            string s_t = s.substr(0,7);
            s.erase(s.begin(),s.begin()+7);
            sz -= 7;
            if (s_t!="remaerd") {
                cout << "NO" << "\n";
                return 0;
            }
        }
        else if (s[2]=='a') {
            string s_t = s.substr(0,5);
            s.erase(s.begin(),s.begin()+5);
            sz -= 5;
            if (s_t!="esare") {
                cout << "NO" << "\n";
                return 0;
            }
        }
        else if (s[2]=='s') {
            string s_t = s.substr(0,6);
            s.erase(s.begin(),s.begin()+6);
            sz -= 6;
            if (s_t!="resare") {
                cout << "NO" << "\n";
                return 0;
            }
        }
        else {cout << "NO" << "\n"; return 0;}
    }

    cout << (sz==0 ? "YES":"NO") << "\n";
    
    return 0;
}