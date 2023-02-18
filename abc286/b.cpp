#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n;
    string s;
    cin >> n >> s;

    queue<char> ans;

    rep(i,s.size()) {
        ans.push(s[i]);
        if (s[i]=='n') {
            if (s[i+1]=='a') ans.push('y');
        }
    }

    while(!ans.empty()) {
        cout << ans.front();
        ans.pop();
    }
    cout << endl;

    return 0;
}