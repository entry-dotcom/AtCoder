#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int N, ans_1=0, ans_2=0;
    cin >> N;
    int A[N], B[N];
    set<int> num_A;
    set<int> num_B;
    rep(i, N) {cin >> A[i]; num_A.insert(A[i]);}
    rep(i, N) {cin >> B[i]; num_B.insert(B[i]);}

    rep(i, N) {
        if (A[i]==B[i]) ans_1++;
        if (num_A.count(B[i])==true & A[i]!=B[i]) ans_2++;
    }
         
    
    


    cout << ans_1 << "\n" << ans_2 << "\n";
    return 0;
}