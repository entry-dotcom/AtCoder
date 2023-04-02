#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;


int main() {

    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    set<int> num;

    rep(i,0,n) {
        int t;
        cin >> t;
        num.insert(t);
    }

    for (auto a:num) {
        //cout << (num.find(a+x)!=num.end()) << "\n";
        if (num.find(a+x)!=num.end()) {
            cout << "Yes" << "\n";
            return 0;
        }
    }

    cout << "No" << "\n";
    

    return 0;
}