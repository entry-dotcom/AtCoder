#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;
const int INF = 2000000000;
// 10進数の格桁の和
int sum_digit(int n) {int ans = 0; while(n>0) { ans += n%10; n /= 10;} return ans;}

int main() {

    int n, m, ans = INF;
    cin >> n;
    vector<vector<int>> a(n,vector<int>(n));
    vector<vector<bool>> kenaku(n,vector<bool>(n));
    rep(i,0,n) rep(j,0,n) cin >> a[i][j];
    cin >> m;
    rep(i,0,m) {
        int x, y;
        cin >> x >> y;
        kenaku[x--][y--] = true;
        kenaku[y--][x--] = true;
    }

    vector<int> vec(n,0);
    rep(i,0,n) vec[i] = i;

    do {
        int sum = 0; bool flag = false;
        rep(i,0,n) {
            sum += a[i][vec[i]];
            if (i<n-1 && kenaku[vec[i]][vec[i+1]] == true) flag = true; 
        }
        if (!flag) ans = min(ans,sum);
        
        
    } while(next_permutation(vec.begin(),vec.end()));
    
    //cout << (ans==INF ? -1:ans) << "\n";
    if (ans==INF) cout << -1 <<"\n";
    else cout << ans << "\n";

    return 0;
}