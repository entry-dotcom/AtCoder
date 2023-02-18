#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;
ll N, Q;
queue<ll> s, t;
int main() {
    
    cin >> N >> Q;
    vector<vector<ll> > L(N);
    for (int i=0; i<N; i++) {
        int l;
        cin >> l;
        L[i] = vector<ll>(l);
        for (int j=0; j<l; j++) {
            cin >> L[i][j];
        }
    }

    for (int i=0; i<Q; i++) {
        ll x, y;
        cin >> x >> y;
        x--; y--;
        s.push(x); t.push(y);
    }

    for (int i=0; i<Q; i++) {
        ll c = s.front(); s.pop();
        ll d = t.front(); t.pop();
        cout << L[c][d] << "\n";
    }

    return 0;
}