#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;
// 10進数の格桁の和
int sum_digit(int n) {int ans = 0; while(n>0) { ans += n%10; n /= 10;} return ans;}

int main() {

    ll n, k, ans = 0;
    cin >> n >> k;
    vector<int> a(n), b(n);

    rep(i,0,n) cin >> a.at(i) >> b.at(i);
    vector<int> vec;

    rep(i,0,n) {
        vec.push_back(b.at(i));
        vec.push_back(a.at(i)-b.at(i));
    }
    
    sort(vec.begin(),vec.end(),greater<int>());
    rep(i,0,k) {
        ans += vec.at(i);
    }
    

    cout << ans << "\n";

    

    

    return 0;
}