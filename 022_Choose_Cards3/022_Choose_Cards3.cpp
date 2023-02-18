#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ll N, ans=0, cnt_50000=1;
    cin >> N;
    ll A[100001];

    for (int i=1; i<100001; i++) A[i]=0;

    for (int i=1; i<N+1; i++) {
        int cnt;
        cin >> cnt; 
        A[cnt]++;
    }

    for (int i=1; i<50000; i++) ans += A[i] * A[100000-i];
    ans += A[50000] * (A[50000]-1)/2;

    cout << ans << endl;

    return 0;
}