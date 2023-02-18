#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int D, N, ans=1;
    cin >> D >> N;

    if (N==100) {
        N++; 
        for (int i=0; i<D; i++) ans *= 100;
        cout << ans * N << endl;
        return 0;
    } else {
        for (int i=0; i<D; i++) ans *= 100;
        cout << ans * N << endl;
    }
    

    return 0;
}