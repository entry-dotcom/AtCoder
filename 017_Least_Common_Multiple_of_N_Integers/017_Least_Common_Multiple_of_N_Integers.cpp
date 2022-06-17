#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll GCD(ll A, ll B) {
    if(B==0) return A;
    else return GCD(B, A%B);
}

ll LCM(ll C, ll D) {return C/GCD(C, D)*D;}


int main() {
    ll N, ans=0;
    cin >> N;
    vector<ll> A(N+1);
    for(int i=1; i<N+1; i++) cin >> A.at(i);

    ans = LCM(A.at(1), A.at(2));
    for (int i=3; i<N+1; i++) ans = LCM(ans, A.at(i));
    cout << ans << endl;

    return 0;
}