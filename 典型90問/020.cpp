#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;
// 10進数の格桁の和
int sum_digit(int n) {int ans = 0; while(n>0) { ans += n%10; n /= 10;} return ans;}

int main() {

    ll a, b, c;
    cin >> a >> b >> c;
    long double ans = 1;
    rep(i,0,b) ans *= c;


    cout << (a<ans ? "Yes":"No") << "\n";
   
    

    return 0;
}