#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int N, ans=0;
    cin >> N;

    for (int i=0; i<N; i++) {
        int sub;
        cin >> sub;
        ans += sub;
    }
    
    cout << ans << "\n";
    
    return 0;
}