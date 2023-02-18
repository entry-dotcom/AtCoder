#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;
int N;


int main() {

    cin >> N;
    vector<int> A(N);
    vector<int> ans(2*N+1,0);

    
    
    for (int i=0; i<N; i++) {
        int a;
        cin >> a;
        A[i] = a;
    }

    for (int i=0; i<2*N+1; i++) {
        ans[2*i+1] = ans[2*i+2] = ans[A[i-1]]+1;
    }
    
     for (int i=0; i<2*N+1; i++) {
        cout << ans[i] << "\n";
    }

    return 0;
}