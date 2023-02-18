#include<bits/stdc++.h>
using namespace std;

int main() {

    string mozi;
    cin >> mozi;

    if (mozi.size()==1) cout << mozi[0] << mozi[0]<< mozi[0]<< mozi[0]<< mozi[0]<< mozi[0]<< endl;
    else if (mozi.size()==2) cout << mozi[0] << mozi[1] << mozi[0] << mozi[1] << mozi[0] << mozi[1] << endl;
    else cout << mozi[0] << mozi[1] << mozi[2] << mozi[0] << mozi[1] << mozi[2] << endl;

    return 0;
}