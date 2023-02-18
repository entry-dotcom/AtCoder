#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int N, M;
    cin >> N >> M;
    int A[100001], B[100001];
    vector<int> G[100001];

    for (int i=1; i<M+1; i++) {
        cin >> A[i] >> B[i];
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }

    for (int i=1; i<N+1; i++) {
        vector<int> ans;
        ans = G[i];
        sort(ans.begin(),ans.end());
        cout << ans.size() << " ";
        for (int j=0; j<ans.size(); j++) {
            cout << ans[j] << " ";
        }cout << endl;
    }   
    
    queue<int> q;
    return 0;
}