#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    string s, c;
    cin >> s;
    s = '$' + s;
    if (s[1]=='1') cout << "No" << "\n";
    else {
        /*
        if (S[6]=='1') c+= 'o'; else c += 'x';
        if (S[3]=='1') c+= 'o'; else c += 'x';
        if (S[1]=='1' || S[7]=='1') c+= 'o'; else c += 'x';
        if (S[0]=='1' || S[4]=='1') c+= 'o'; else c += 'x';
        if (S[2]=='1' || S[8]=='1') c+= 'o'; else c += 'x';
        if (S[3]=='1') c+= 'o'; else c += 'x';
        if (S[5]=='1') c+= 'o'; else c += 'x';
        if (S[9]=='1') c+= 'o'; else c += 'x';
        */
        //array<bool, 7> column = {};
        vector<bool> column(7);
        column[0] = (s[7] == '1');
        column[1] = (s[4] == '1');
        column[2] = (s[2] == '1') or (s[8] == '1');
        column[3] = (s[1] == '1') or (s[5] == '1');
        column[4] = (s[3] == '1') or (s[9] == '1');
        column[5] = (s[6] == '1');
        column[6] = (s[10] == '1');
        for (int i=0; i<7; i++) {
            for (int j=0; j<i; j++) {
                if (column[i] and column[j]) {
                    for (int k=j+1; k<i; k++) {
                        if (!column[k]) {
                            cout << "Yes" << endl;
                            return 0;
                        }
                    }
                }
            }
        }
        cout << "No" << "\n";
    }
    return 0;
    
}