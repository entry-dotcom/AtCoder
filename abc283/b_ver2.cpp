#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, q;
    cin >> n;
    vector<int> a(n);
    
    rep(i,n) cin >> a[i];

    cin >> q;

    rep(i,q) {
        int num;
        cin >> num;
        if (num==1) {
            int k, x;
            cin >> k >> x;
            a[k-1] = x;
        }
        else {
            int k;
            cin >> k;
            cout << a[k-1] << "\n";
        }
    }



    




    return 0;
}