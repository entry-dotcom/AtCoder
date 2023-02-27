#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n;
    string s;
    cin >> n >> s;
    int x, y;
    x = y = 0;
    set<pair<int,int>> used({{0,0}});

    for (auto c:s) {
        if (c=='U') y++;
        else if (c=='D') y--;
        else if (c=='R') x++;    
        else x--;
        if (used.count({x,y})) {
            cout << "Yes" << "\n";
            return 0;
        }
        used.insert({x,y});
    }

    cout << "No" << "\n";


    return 0;
}