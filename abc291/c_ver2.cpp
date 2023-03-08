#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;
void solve(string s) {
    set<pair<int, int>> visit({{0,0}});
    int x, y;
    x = y = 0;
    rep(i,0,(int)s.size()) {
        if (s[i]=='U') y++;
        else if (s[i]=='D') y--;
        else if (s[i]=='L') x--;
        else x++;
        if (visit.count({x,y})) {
            cout << "Yes" << "\n";
            exit(0);
        }
        visit.insert({x,y});
    }

    cout << "No" << "\n";
}

int main() {

    int n;
    string s;
    cin >> n >> s;

    solve(s);



    return 0;
}