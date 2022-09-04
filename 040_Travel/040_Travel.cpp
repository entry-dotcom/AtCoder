#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    ll N, M;
    cin >> N;
    vector<ll> A(200009), S(200009);
    for (int i=1; i<N; i++) cin >> A[i];
    cin >> M;
    vector<ll> B(200009);
    for(int i=1; i<M+1; i++) cin >> B[i];
    
    //累積和を求める
    S[1]=0;
    for (int i=2; i<N+1; i++) S[i] = S[i-1]+A[i-1];

    //答えを求める
    ll ans=0;
    for (int i=1; i<M; i++) {
        if (B[i] < B[i+1]) ans += (S[B[i + 1]] - S[B[i]]);
        else ans += (S[B[i]] - S[B[i + 1]]);
    }

    cout << ans << endl;

    return 0;
}