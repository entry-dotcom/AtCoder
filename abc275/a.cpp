#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    ll N, kari_max=-1, ans;
    cin >> N;
    vector<int> H(N+1);

    for (int i=1; i<N+1; i++) {
        int a;
        cin >> a;
        H[i] = a;
    }
    
    for (int i=1; i<N+1; i++) {
        if (kari_max<H[i]) {
            kari_max = H[i];
            ans = i;
        }
    }
    //if (N==1) ans=1;

    cout << ans << "\n";

    return 0;
}