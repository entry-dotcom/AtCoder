#include<bits/stdc++.h>
using namespace std;

int main() {
    
    long long a, b, k, ans = 0;
    cin >> a >> b >> k;

    while(a<b) {
        a *= k;
        ans++;
    }

    cout << ans << "\n";

    return 0;
}