#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;
int N, M, A[100009], B[100009];
int a[100001], b[100001];
vector<int> G[100001];
int Answer(int N) {
    int ans = 0;
    for (int i=1; i<N+1; i++) {
        int cnt = 0;
        for (int j=0; j<(int)G[i].size(); j++) {
            if (G[i][j]<i) cnt++;
        }
        if (cnt==1) ans++;
    }
    return ans;
}

int main() {

    int N, M;
    cin >> N >> M;
    for (int i=1; i<M+1; i++) {
        cin >> a[i] >> b[i];
        G[a[i]].push_back(b[i]);
        G[b[i]].push_back(a[i]);
    }

    /*
    int ans = 0;
    for (int i=1; i<N+1; i++) {
        int cnt = 0;
        for (int j=0; j<(int)G[i].size(); j++) {
            if (G[i][j]<i) cnt++;
        }
        if (cnt==1) ans++;
    }
    */

    cout << Answer(N) << endl;

    return 0;
}