#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    string mozi;
    cin >> mozi;

    //cout << mozi[0] << mozi[1] << mozi[2] << endl;
    if (mozi[0]==mozi[1] & mozi[1]==mozi[2]) cout << -1 << endl;
    else if (mozi[0]!=mozi[1] & mozi[1]!=mozi[2] & mozi[0]!=mozi[2]) cout << mozi[0] << endl;
    else if (mozi[0]!=mozi[1] & mozi[1]==mozi[2]) cout << mozi[0] << endl;
    else if (mozi[1]!=mozi[0] & mozi[0]==mozi[2]) cout << mozi[1] << endl;
    else cout << mozi[2] << endl;


    return 0;
}