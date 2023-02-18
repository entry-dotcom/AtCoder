#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll N;
    cin >> N;
    ll A, num[5];
    for (int i=1; i<5; i++) num[i]=0;


    for (int i=1; i<N+1; i++) {
        A = 0;
        cin >> A;
        A = A/100;
        num[A]++;
    }

    cout << num[1]*num[4]+num[2]*num[3] << endl;
    return 0;
}