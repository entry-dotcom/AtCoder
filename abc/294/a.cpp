#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, a;
    cin >> n;
    
    rep(i,0,n) {
        cin >> a;
        if (a%2==0) cout << a << " ";
    }
    cout << endl;


    return 0;
}