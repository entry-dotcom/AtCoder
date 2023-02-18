#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int N, M;
    cin >> N >> M;
    vector<vector<int>> ans(N, vector<int> (N, 0));
    
    for (int i=0; i<M; i++) {
        int k;
        cin >> k;
        vector<int> x(k);
        for (int j=0; j<k; j++) {cin >> x[j]; --x[j];}
        for (int l=0; l<(int)x.size(); l++) {
            for (int m=l+1; m<(int)x.size(); m++) {
                ++ans[x[l]][x[m]];
            }
        }
    }

    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++) {
            if (ans[i][j]<1) {
                cout << "No" << "\n";
                return 0;
            }
        }
    }

    cout << "Yes" << "\n";

    return 0;
}