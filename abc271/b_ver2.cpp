#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;
queue<ll> s, t;
int main() {
    
    int N, Q;
    cin >> N >> Q;
    vector<vector<int>> L(N);

    for (int i=0; i<N; i++) {
        int l;
        cin >> l;
        L[i] = vector<int>(l);
        for (int j=0; j<l; j++) cin >> L[i][j];
    }

    for (int i=0; i<Q; i++) {
        int s, t;
        cin >> s >> t;
        cout << L[s-1][t-1] << "\n";
    }
    return 0;
}