#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int h, w;
    cin >> h >> w;
    
    vector<int> dn = {-w,-1,1,w};
    vector<int> dx = {0,-1,1,0};
    vector<int> dy = {-1,0,0,1};
    vector<vector<char>> graph(h, vector<char>(w));
    //vector<int> root[(h+1)*(w+1),'#'];
    
    vector<char> root(h*w);

    rep(i,h) {
        rep(j,w) {
            //char l;
            cin >> root[i*w+j];
            //= l;
        }
    }

rep(i,h*w) cout << root[i] << "\n";

//return 0;

}