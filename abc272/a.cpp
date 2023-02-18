#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int N;
    cin >> N;
    //stack<int> ans;
    ll ans = 0;

    for (int i=0; i<N; i++) {
        int in;
        cin >> in;
        ans += in;
    }
    
    /*
    ll ans2 = 0;
    for (int i=0; i<ans.size()+1; i++) {
        ans2 += ans.top();
        ans.pop();
    }
    */
    cout << ans << "\n";

    return 0;
}