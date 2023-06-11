#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {

    int K;
    cin >> K;

    if (K>=60) {
        if (69>=K) cout << 22 << ":" << 0 << K%60 << endl;
        else cout << 22 << ":" << K%60 << endl;
        
    }
    if (60>K) {
        if (10>K) cout << 21 << ":" << 0 << K%60 << endl;
        else cout << 21 << ":" << K%60 << endl;
    }
        
    return 0;
}