#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    string s;
    cin >> s;
    int n = s.size();
    //vector<vector<int>> x(n+1,vector<int>(10));
    vector<vector<int>> x(n,vector<int>(10));
    map<int,int> mp;
    rep(i,0,n) {
        int num = s[i]-'0';
        //cout << num+1 << " ";
        x[i][num]++;
        //x[i][num-1]%=2;
    }
    rep(i,0,n) {
        rep(j,0,10) {
            //cout << x[i][j];
        }
        //cout << endl;
    }
    
    //cout << ans << "\n";

    return 0;
}