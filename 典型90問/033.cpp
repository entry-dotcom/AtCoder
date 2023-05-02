#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;
// 10進数の格桁の和
int sum_digit(int n) {int ans = 0; while(n>0) { ans += n%10; n /= 10;} return ans;}

int main() {

    int h, w;
    cin >> h >> w;

    if (h==1||w==1) cout << h*w << "\n";
    else cout << ((h+1)/2)*((w+1)/2) << "\n";
    

    return 0;
}