#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    ll N, A[4], num;
    cin >> N;

    for (int i=1; i<4; i++) A[i]=0;
    for (int i=1; i<N+1; i++) {
        cin >> num;
        A[num]++;
    }
    
    for (int i=1; i<4; i++) A[i]= A[i]*(A[i]-1)/2;
    cout << A[1]+A[2]+A[3] << endl;

    return 0;
}