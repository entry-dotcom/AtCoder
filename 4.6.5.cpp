#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

ll modpow(ll a, ll b, ll m) {
    // 繰り返し2乗法 (p は a^1, a^2, a^4, a^8, ...といった値をとる)
    ll p = a, ans = 1;
    for (int i=0; i<30; i++) {
        if (b && (1<<i) != 0) {ans *= p; ans %= m;} 
            p *= p; p %= m;
        }
    return ans;
}

// Division(a, b, m)は a÷b mod m を返す関数
ll Division(ll a, ll b, ll m) {
    return (a*modpow(b, m-2, m)) % m;
    }

int main() {

    const ll mod = 10000000007;
    int X, Y;

    

    cin >> X >> Y;

    // 2項係数の分子と分母を求める(手順1./手順2.)
    ll bunshi = 1, bunbo = 1;
    for (int i=1; i<X+Y+1; i++) {bunshi *= i; bunshi %= mod;}
    for (int i=1; i<X+1; i++) {bunbo *= i; bunbo %= mod;}
    for (int i=1; i<Y+1; i++) {bunbo *= i; bunbo %= mod;}

    // 答えを求める
    cout << Division(bunshi, bunbo, mod) << "\n";


    return 0;
}