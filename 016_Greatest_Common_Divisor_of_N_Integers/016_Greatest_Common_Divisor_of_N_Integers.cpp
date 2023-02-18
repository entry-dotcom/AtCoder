#include<bits/stdc++.h>
using namespace std;
long long GCD(long long A, long long B) {
    while(A>0 && B>0) {
        if (A >= B) A = A%B;
        else B = B%A;
    }
    if (A>0) return A;
    else return B;
}

int main() {

    long long N, ans=0;
    cin >> N;
    vector<long long> A(N+1);
    for(int i=1; i<N+1; i++) cin >> A.at(i);

    ans = GCD(A.at(1), A.at(2));
    for (int i=3; i<N+1; i++) ans = GCD(ans, A.at(i));
    cout << ans << endl;

    return 0;
}