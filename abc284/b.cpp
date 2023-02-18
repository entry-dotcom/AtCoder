#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int t;
    cin >> t;
    vector<vector<int> > test(100, vector<int> (100));
    queue<int> ans;

    rep(i,t) {
        int n;
        cin >> n;
        //vector<int> a(n);
        int cnt = 0, r;
        rep(j,n) {
            cin >> r;
            if (r%2!=0) cnt++;
        }
        ans.push(cnt);
        //test[i].push_back(a);
    }

    while(!ans.empty()) {
        cout << ans.front() << "\n";
        ans.pop();
    }
    
    return 0;
}