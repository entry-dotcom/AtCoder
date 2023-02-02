#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int N, M;
    cin >> N >> M;
    vector<vector<int>> butokai(N, vector<int>(N, 0));
    //vector<int> person_per_butokai(M);

    for (int i=0; i<M; i++) {
        int k;
        cin >> k;
        vector<int> x(k);
        for (int q=0; q<k; q++) {cin >> x[q]; x[q]--;} 
        for (int n=0; n<(int)x.size(); n++) {
            for (int l=n+1; l<(int)x.size(); l++) {
                butokai[x[n]][x[l]]++; 
            }
        }
    }
    
    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++) {
            if (butokai[i][j]<1) {
                cout << "No" << "\n";
                return 0;
            }
        }
    }
    
    cout << "Yes" << "\n";
    return 0;
}