#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, k;
    cin >> n >> k;
    set<int> st;
    rep(i,0,n) {
        int a;
        cin >> a;
        st.insert(a);
    }

    rep(i,0,k) {
        if (!st.count(i)) {
            cout << i << "\n";
            return 0;
        }
    }

    cout << k << "\n";

    return 0;
}