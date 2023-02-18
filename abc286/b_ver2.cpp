#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n;
    string s;
    cin >> n;

    queue<char> ans;
    //ans.push(s);

    rep(i,n) {
        char c;
        cin >> c;
        ans.push(c);
    }

    while(!ans.empty()) {
        if (ans.front()=='n') {
            cout << ans.front();
            ans.pop();
            if (ans.front()=='a') {
                cout << "y" << ans.front();
                ans.pop();
            }
        }
        else {
            cout << ans.front();
            ans.pop();
        }
    }
    cout << endl;

    

    return 0;
}