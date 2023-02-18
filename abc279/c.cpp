#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int h, w;
    cin >> h >> w;
    vector<vector<char>> s(h,vector<char>(w));
    vector<vector<char>> t(h,vector<char>(w));

    for (int i=0; i<h; i++) {
        for (int j=0; j<w; j++) {
            char inp;
            cin >> inp;
            s[i][j] = inp;
        }
    }

    for (int i=0; i<h; i++) {
        for (int j=0; j<w; j++) {
            char inp;
            cin >> inp;
            t[i][j] = inp;
        }
    }

    for (int i=0; i<h; i++) {
        int kazu_S, kazu_T;
        for (int j=0; j<w; j++) {
            if (s[i][j]=='.') kazu_S++;
            if (t[i][j]=='.') kazu_T++;
        }
        if (kazu_S!=kazu_T) {
            cout << "No" << "\n";
            return 0;
        }
    }

    for (int i=0; i<w; i++) {
        int kazu_S, kazu_T;
        for (int j=0; j<h; j++) {
            if (s[j][i]=='.') kazu_S++;
            if (t[j][i]=='.') kazu_T++;
        }
        if (kazu_S!=kazu_T) {
            cout << "No" << "\n";
            return 0;
        }
    }

    cout << "Yes" << "\n";
    
    return 0;
}