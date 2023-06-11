#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;
// 10進数の格桁の和
ll sum_digit(ll n) {ll ans = 0; while(n>0) { ans += n%10; n /= 10;} return ans;}


int main() {

    int n;
    cin >> n;
    set<string> user;

    rep(i,0,n) {
        string s;
        cin >> s;
        if (!user.count(s)) cout << i+1 << "\n";
        user.insert(s);
    }

    return 0;
}