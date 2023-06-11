#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep1(i, start, n) for (int i = start; i < (int)(n); i++)
#define rep2(i, finish, n) for (int i = finish; i > (int)(n); i--)
const double PI = 3.14159265358979;
// 10進数の格桁の和
int sum_digit(int n) {int ans = 0; while(n>0) { ans += n%10; n /= 10;} return ans;}

int main() {

    int n, m, ans = 0;
    cin >> n >> m;
    vector<int> graph[n];

    rep1(i,0,m) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    rep1(j,0,n) {
        int num = 0;
        vector<int> v = graph[j];
        rep1(i,0,(int)v.size()) {
            if (v[i]<j+1) num++;
        }
        if (num==1) ans++;
    }

    cout << ans << "\n";

    return 0;
}