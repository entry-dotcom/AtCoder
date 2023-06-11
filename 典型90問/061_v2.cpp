#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;
// 10進数の格桁の和
int sum_digit(int n) {int ans = 0; while(n>0) { ans += n%10; n /= 10;} return ans;}

int main() {

    int q;
    cin >> q;
    deque<int> que;

    rep(i,0,q) {
        int t, x;
        cin >> t >> x;
        if (t==1) que.push_front(x);
        else if (t==2) que.push_back(x);
        else cout << que[x-1] << "\n";
    }
    

    return 0;
}