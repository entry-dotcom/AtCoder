#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int N, ans=0, cost=0;
    cin >> N;
    vector<int> a(N+1, 0);
    set<int> st;

    for (int i=1; i<N+1; i++) {
        cin >> a[i];
        st.insert(a[i]);
    }

    for (int i=1; i<N+1; i++) {
        if (st.count(i)) cost++;
        else cost+=2;
        if (cost>N) break;
        ans = i;
    }

    cout << ans << "\n";

    return 0;
}