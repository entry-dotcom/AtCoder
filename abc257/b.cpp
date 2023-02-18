#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)


int main() {

    int n, k, q;
    cin >> n >> k >> q;
    int a[201];

    for (int i=1; i<k+1; i++) cin >> a[i];

    for (int i=0; i<q; i++) {
        int l; cin >> l;
        if (a[l]==n) continue;
        else if (l==k) a[l]++;
        else if (a[l]+1<a[l+1]) a[l]++;
    }


    for (int i=1; i<k+1; i++) {
        cout << a[i];
        if (i<k) cout << " ";
        else cout << endl;
    }
    
    
    
        
   



    return 0;
}