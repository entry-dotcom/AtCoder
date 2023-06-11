#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<char> S(4);

    for (int i=0; i<4; i++) cin >> S.at(i);

    if (S.at(0)==S.at(1)) cout << "Bad" << endl;
    else if (S.at(1)==S.at(2)) cout << "Bad" << endl;
    else if (S.at(2)==S.at(3)) cout << "Bad" << endl;
    else cout << "Good" << endl;

}