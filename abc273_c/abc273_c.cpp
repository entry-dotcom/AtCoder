#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int N;
    cin >> N;
    vector<int> A(N);
   vector<int> ans(N);

    for (int i=0; i<N; i++) {
        int a;
        cin >> a;
        A.push_back(a);
        
    }
    sort(A.rbegin(), A.rend());
    //rep(i, N) {cout << A[i] << endl;}
    

    return 0;
}