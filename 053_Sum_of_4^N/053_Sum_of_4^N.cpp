//#include <bits/stdc++.h>
#include<iostream>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;
const ll mod = 1000000007;

ll modpow(ll a, ll b, ll m) {
    // 繰り返し2乗法 (p は a^1, a^2, a^4, a^8, ...といった値をとる)
    ll p = a, ans = 1;
    for (int i=0; i<60; i++) {
        if ((b & (1LL<<i)) != 0) {ans *= p; ans %= m;}
        p *= p; p %= m;
    }
    return ans;
}

// Division(a, b, m)は a÷b mod m を返す関数
ll Division(ll a, ll b, ll m) {
    return (a*modpow(b, m-2, m)) % m;
    }

int main() {

    ll N;
    cin >> N;
    
    // 2項係数の分子と分母を求める(手順1./手順2.)
    ll V = modpow(4, N+1, mod) - 1;
    ll ans = Division(V, 3, mod);

    // 答えを求める
    cout << ans << endl;

    return 0;
}