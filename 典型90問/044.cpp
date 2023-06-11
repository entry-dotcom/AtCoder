#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;
// 10進数の格桁の和
int sum_digit(int n) {int ans = 0; while(n>0) { ans += n%10; n /= 10;} return ans;}

int main() {

    int n, q, shift = 0;
    cin >> n >> q;

    vector<int> a;
    
    rep(i,0,n) {
        int a_i;
        cin >> a_i;
        a.push_back(a_i);
    }

    rep(i,0,q) {
        int t, x, y;
        cin >> t >> x >> y;
        x--, y--;
        if (t==1) {
            x = (x+shift)%n;
            y = (y+shift)%n;
            swap(a.at(x),a.at(y));
        }
        else if (t==2) shift = (shift+n-1)%n;
        else cout << a.at((x+shift)%n) << "\n";
    }

    

    return 0;
}