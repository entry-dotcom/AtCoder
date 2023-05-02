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
    //map<int,int> card;
    deque<int> card;

    rep(i,0,q) {
        int t, x;
        cin >> t >> x;
        if (t==1) card.push_front(x);
        else if (t==2) card.push_back(x);
        else cout << card[x-1] << "\n";
    }

    

    return 0;
}