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
    map<char, string> word;
    word['e'] = "maerd";
    word['m'] = "remaerd";
    word['a'] = "esare";
    word['s'] = "resare";
    
    while(sz>0) {
        if (word.count(s[2])) {
            int word_len = word[s[2]].size();
            string s_t = s.substr(0,word_len);
            string s_t2 = word[s[2]];
            s.erase(s.begin(),s.begin()+word_len);
            sz -= word_len;
            if (s_t2!=s_t) {
                cout << "NO" << "\n";
                return 0;
            }
        }
        else {
            cout << "NO" << "\n";
            return 0;
        }
    }

    cout << (sz==0 ? "YES":"NO") << "\n";
    
    return 0;
}