#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

bool solve() {
    int N;
    cin >> N;
    vector<string> data(N);
    rep(i, N) cin >> data[i];
    rep(i, N)rep(j, N) {
        if (i<=j) continue;
        else if (data[i][j]=='D') {
            if (data[j][i]!='D') return false;
        }
        else if (data[i][j]=='W') {
            if (data[j][i]!='L') return false; 
        }
        else if (data[i][j]=='L') {
         if (data[j][i]!='W') return false;
        }
    }
    return true;           
}

int main() {

    if (solve()) cout << "correct" << endl;
    else cout << "incorrect" << endl;

    return 0;
}