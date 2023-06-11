#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;
const int INF = 2000000000;
//int a[2000000], b[2000000];
// 10進数の格桁の和
int sum_digit(int n) {int ans = 0; while(n>0) { ans += n%10; n /= 10;} return ans;}

int main() {

    int n, q;
    cin >> n;
    vector<int> a(n);
    rep(i,0,n) cin >> a[i];
    sort(a.begin(),a.end());
    cin >> q;
    vector<int> b(q);
    rep(i,0,q) cin >> b[i];

    rep(i,0,q) {
        int pos = lower_bound(a.begin(),a.end(),b[i]) - a.begin();
        int diff1 = INF, diff2 = INF;
        diff1 = abs(b[i] - a[pos]);
        if (pos > 0) diff2 = abs(b[i] - a[pos - 1]);
        cout << min(diff1, diff2) << "\n";
    }


    

    return 0;
}