#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, q, t, a, b;
    cin >> n >> q;
    /*
    vector<int> t(q);
    vector<int> a(q);
    vector<int> b(q);
    */
    //　フォロー関係保持の集合
    set<pair<int, int>> follows;
    queue<bool> ans;
    
    for (int i=0; i<q; i++) {
        cin >> t >> a >> b;
        if (t==1) follows.insert({a,b});
        if (t==2) follows.erase({a,b});
        if (t==3) {
            cout << (follows.count({a,b}) && follows.count({b,a}) ? "Yes":"No")<< "\n";
        }
    }

    return 0;
}