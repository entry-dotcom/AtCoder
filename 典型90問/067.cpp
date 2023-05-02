#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep1(i, start, n) for (int i = start; i < (int)(n); i++)
#define rep2(i, finish, n) for (int i = finish; i > (int)(n); i--)
const double PI = 3.14159265358979;
// 10進数の格桁の和
int sum_digit(int n) {int ans = 0; while(n>0) { ans += n%10; n /= 10;} return ans;}

ll base8_to_long(string n) {
    ll m = (int)n.size();
    ll res = 0, x = 1;
    rep1(i,0,m) {
        res = res * 8 + (n[i]-'0') * x;
        //x *= 8LL;
    }
    return res;
}

string long_to_9(ll ten) {
    if (ten==0) return "0";
    string res;
    while(ten>0) {
        res = char((ten % 9) + '0') + res;
        ten /= 9;
    }
    return res;
}

int main() {

    string n, ans;
    ll k;
    cin >> n >> k;

    for (int j=0; j<k; j++) {
        n = long_to_9(base8_to_long(n));
        rep1(i,0,(int)n.size()) {
            if (n[i]=='8') n[i] = '5';
        }
    }
    
    cout << n << "\n";
    
    return 0;
}