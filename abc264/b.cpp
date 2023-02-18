#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int R, C;
    cin >> R >> C;

    if (R==1 | R==15 | C==1 | C==15) cout << "black" "\n";
    else if (R==2 | R==14 | C==2 | C==14) cout << "white" "\n";
    else if (R==3 | R==13 | C==3 | C==13) cout << "black" "\n";
    else if (R==4 | R==12 | C==4 | C==12) cout << "white" "\n";
    else if (R==5 | R==11 | C==5 | C==11) cout << "black" "\n";
    else if (R==6 | R==10 | C==6 | C==10) cout << "white" "\n";
    else if (R==7 | R==9 | C==7 | C==9) cout << "black" "\n";
    else cout << "white" "\n";

    


    return 0;
}