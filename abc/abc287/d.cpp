#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    string s, t, s_t;
    cin >> s >> t;
    s_t = s;
    const int s_sz = s.size(), t_sz = t.size();
    //reverse(s_t.begin(),s_t.end());
    bool check = true;

    for (int i=0; i<s_sz; i++) {
        string rv_s = s_t.substr(s_sz-i);
        reverse(rv_s.begin(),rv_s.end());
        string rv_s2 = rv_s.substr(0,t_sz-i);
        reverse(rv_s2.begin(),rv_s2.end());
        string s_dash = s.substr(0,i) + rv_s2;
        cout << s_dash << " " << t << "\n";
        //cout  << " " << t << "\n";
        if (!((s_dash[i]==t[i]) || s_dash[i]=='?'||t[i]=='?')) check = false;
        cout << (check ? "Yes":"No") << "\n";
    }
    
    return 0;
}