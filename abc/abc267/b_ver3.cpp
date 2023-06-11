#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    string S, c;
    cin >> S;

    if (S[6]=='1') c+= 'o'; else c += 'x';
    if (S[3]=='1') c+= 'o'; else c += 'x';
    if (S[1]=='1' || S[7]=='1') c+= 'o'; else c += 'x';
    if (S[0]=='1' || S[4]=='1') c+= 'o'; else c += 'x';
    if (S[2]=='1' || S[8]=='1') c+= 'o'; else c += 'x';
    if (S[5]=='1') c+= 'o'; else c += 'x';
    if (S[9]=='1') c+= 'o'; else c += 'x';

    if (S[0]=='1') {
        cout << "No" << "\n";
        return 0;
    }
    else {
        for (int i=1; i<7; i++) {
            for (int j=0; j<i; j++) {
                if (c[i]=='o' && c[j]=='o') {
                    for (int k=j+1; k<i; k++) {
                        if (c[k]=='x') {
                            cout << "Yes" "\n";
                            return 0;
                        }
                    }
                }
            }
        }
    }
    
    cout << "No" "\n";
    
    return 0;
}