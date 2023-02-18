#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    string s;
    cin >> s;
    int n = s.size();
    vector<vector<char>> v(n);
    vector<bool> used(256);
    int now = 0;

    rep(i,s.size()) {
        if (s[i]=='(') now++;
        else if (s[i]==')') {
            for (char c:v[now]) used[c] = false;
            v[now].clear();
            now--;
        }
        else {
            if (used[s[i]]) {
                cout << "No\n";
                return 0;
            }
            v[now].push_back(s[i]);
            used[s[i]] = true;
        }
    }

    cout << "Yes\n";

    return 0;
}