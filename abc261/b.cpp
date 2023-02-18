#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int N;
    cin >> N;
    vector<string> data(N);
    
    rep(i, N) cin >> data[i];
    
    rep(i, N) {
        rep(j, N) {
            if (i<=j) continue;
            else if (data[i][j]=='D') {
                if (data[j][i]!='D') {
                    cout << "incorrect" << endl;
                    return 0;
                }
            }
            else if (data[i][j]=='W') {
                if (data[j][i]!='L') {
                    cout << "incorrect" << endl;
                    return 0;
                }
            }
            else if (data[i][j]=='L') {
                if (data[j][i]!='W') {
                    cout << "incorrect" << endl;
                    return 0;
                }
            }
        }
    }
    
    
    cout << "correct" << endl;
    

    return 0;
}