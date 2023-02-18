#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n,x;
    cin >> n >> x;
    int p[n];

    for (int i=0; i<n; i++) {
        cin >> p[i];
        if (p[i]==x) {
            cout << i+1 << "\n";
        }
    }

    //cout << p[x-1] << "\n";
    
    return 0;
}