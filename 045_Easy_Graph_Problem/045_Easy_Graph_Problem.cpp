#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;
int N, M, A[100009], B[100009];
vector<int> G[100009];
//int dist[100009];

int main() {

    cin >> N >> M;

    for (int i=1; i<M+1; i++) {
        cin >> A[i] >> B[i];
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }

    /*
    int ans=0;
    for (int i=1; i<N+1; i++) {
        int cnt = 0;
        for (int j=0; j<G[i].size(); j++) {
            if (G[i][j]<i) cnt++;
        }
        if (cnt==1) ans++;
    }
    
    cout << ans << "\n";
    */

    for (int i=1; i<N+1; i++) {
        cout << "{";
        for (int j=0; j<G[i].size()-1; j++) {
            cout << G[i][j] << ", ";
        }
        cout << G[i][G[i].size()] << "}" << endl;
    }

    return 0;
}