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

    int n, m;
    cin >> n >> m;
    vector<int> graph[n];

    rep1(i,0,m) {
        int a, b;
        cin >> a >> b;
        a--, b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    int ans = 0;

    rep1(i,0,n) {
        int cnt = 0;
        rep1(j,0,graph[i].size()) {
            if (graph[i][j]<i) cnt++;
        }
        if (cnt==1) ans++;
    }

    cout << ans << "\n";

    return 0;
}