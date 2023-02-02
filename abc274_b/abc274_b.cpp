#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;
int H, W;
vector<vector<char>> C(1000,vector<char>(1000));
vector<int> ans(1000);

int main() {
    
    cin >> H >> W;
    

    for (int i=0; i<H; i++) {
        string a;
        cin >> a;
        for (int j=0; j<W; j++) {
            C[i][j]=a[j];
            if (a[j]=='#') ans[j]++;
        }
    }
    /*
    for (int i=0; i<W; i++) {
        for (int j=0; j<H; j++) {
            if (C[i][j]=='#') ans[i]++;
        }
    }
    */
    for (int i=0; i<W; i++) cout << ans[i] << " ";
    cout << endl;

    return 0;
 
}