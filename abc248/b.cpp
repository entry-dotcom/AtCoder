#include<bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, K, ans=0;
    
    
    cin >> A >> B >> K;

    while(A<B) {
        A *= K;
        ans++;
    }
    
    cout << ans << endl;
    
    return 0;
}