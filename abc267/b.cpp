#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    string S, c;
    cin >> S;
    c = 'x';
    if (S[6]=='1') c+= 'o'; else c += 'x';
    if (S[3]=='1') c+= 'o'; else c += 'x';
    if (S[1]=='1' || S[7]=='1') c+= 'o'; else c += 'x';
    if (S[0]=='1' || S[4]=='1') c+= 'o'; else c += 'x';
    if (S[2]=='1' || S[8]=='1') c+= 'o'; else c += 'x';
    if (S[3]=='1') c+= 'o'; else c += 'x';
    if (S[5]=='1') c+= 'o'; else c += 'x';
    if (S[9]=='1') c+= 'o'; else c += 'x';
    
    int xo = 0;
    for (int i=0; i+1<c.size(); i++) {
        if (c[i]=='x' && c[i+1] == 'o') xo++;
    }
    if (S[0]=='0' && xo>1) cout << "Yes" << "\n";
    else cout << "No" << "\n";

    /*    
    if (S[0]=='0') {
        for (int i=0; i<7; i++) {
            for (int j=0; j<7; j++) {
                for (int k=0; k<j; k++) {
                    if (c[k]=='x' && (c[i]=='o' && c[j]=='o')) {
                        cout << "Yes" << "\n";
                        return 0;
                    }
                }
            }
        }
    }
    */
    
    
    return 0;
}