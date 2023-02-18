#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, k;
    cin >> n >> k;
    queue<int> a;

    for (int i=0; i<n; i++) {
        int inp;
        cin >> inp;
        a.push(inp);
    }
    
    if (n<k) {
        for (int i=0; i<n; i++) cout << 0 << " ";
        return 0;
    }
    else {
        for (int i=0; i<k; i++) {
            a.pop();
            a.push(0);
        }
        
    }

    while(!a.empty()) {
        cout << a.front() << " ";
        a.pop();
    }
    cout << endl;

    return 0;
}