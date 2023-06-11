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
    ll res = 0;
    rep1(i,0,(int)n.size()) {
        res = (n[i]-'0') + res * 8;
    }
    return res;
}

string long_to_base9(ll n) {
    string res;
    while(n>0) {
        res = char((n%9)+'0') + res;
        n /= 9;
    }
    return res;
}

int main() {

    string n, ans;
    ll k;
    cin >> n >> k;

    rep1(i,0,k) {
        n = long_to_base9(base8_to_long(n));
        rep1(j,0,(int)n.size()) {
            if (n[j]=='8') n[j] = '5';
        }
    }
    cout << n << "\n";


    
    return 0;
}