#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;


bool check(string s) {
    ll sz = s.size();
    reverse(s.begin(),s.end());

    map<char, string> keyword;
    keyword['e'] = "maerd";
    keyword['m'] = "remaerd";
    keyword['a'] = "esare";
    keyword['s'] = "resare";

    bool check = true;
    
    while(sz>0) {
        if (keyword.count(s[2])) {
            const int word_len = keyword[s[2]].size();
            string s_t = s.substr(0, word_len);
            s.erase(s.begin(),s.begin() + word_len);
            sz -= word_len;
            if (s_t!=keyword[s_t[2]]) {
                check = false;
                break;
            }
        }
        else {
            check = false;
            break;
        }
    }
    return check;
}

int main() {

    string s;
    cin >> s;
    
    cout << (check(s) ? "YES" : "NO") << "\n";
    

    return 0;
}