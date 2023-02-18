#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    //vector<<vector<string> > s(9,vector<string>(9));
    vector<string> s(9);
    string inp;

    for (int i=0; i<9; i++) {
        cin >> inp;
        s[i] = inp;
    }

    int ans=0;
        
    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            for (int k=i; k<9; k++) {
                for (int m=j+1; m<9; m++) {
                    if (s[i][j]=='#' && s[k][m]=='#'){
                        int Cr = k + m - j;
                        int Cc = m - (k - i);
                        int Dr = i + m - j;
                        int Dc = j - (k - i);
                        if ((0<=Cr&&Cr<=8) && (0<=Cc&&Cc<=8) && (0<=Dr&&Dr<=8) && (0<=Dc&&Dc<=8)) {
                            if (s[Cr][Cc]=='#' && s[Dr][Dc]=='#') ans++;
                        }
                    }
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}