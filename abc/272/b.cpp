#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int N, M;
    cin >> N >> M;
    vector<vector<bool>> butokai(N, vector<bool>(N, false));

    for (int i=0; i<M; i++) {
        int k;
        cin >> k;
        vector<int> a(k);
        for (auto &v : a) {cin >> v, v--;}
        for (int j=0; j<(int)a.size(); j++) {
            for (int k=j+1; k<(int)a.size(); k++) {
                butokai[a[j]][a[k]] = true;
            }
        }
    }

    

    bool ans = true;
    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++) {
            if (butokai[i][j] == false) {
                ans &= butokai[i][j];
            }
        } 
    }

    cout << (ans ? "Yes":"No") << "\n";

    return 0;
}