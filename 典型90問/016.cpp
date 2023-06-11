#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;
// 10進数の格桁の和
int sum_digit(int n) {int ans = 0; while(n>0) { ans += n%10; n /= 10;} return ans;}

int main() {

    ll n, a, b, c, ans = 1000000, kari_ans=0;
    cin >> n >> a >> b >> c;

    rep(i,0,10000) {
        rep(j,0,10000) {
            if ((n-a*i-b*j)%c==0) {
                if (a*i+b*j<=n) {
                    if (a*i+b*j>=0){
                        kari_ans = i+j+(n-a*i-b*j)/c;
                        ans = min(ans,kari_ans);
                    }
                }
            }
            
        }
    }
    
    cout << ans << "\n";

    return 0;
}