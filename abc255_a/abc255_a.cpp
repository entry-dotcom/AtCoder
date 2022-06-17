#include<bits/stdc++.h>
using namespace std;

int main() {
    int R, C;
    vector<vector<int> > ans(3, vector<int>(3));
    cin >> R >> C;
    cin >> ans.at(1).at(1) >> ans.at(1).at(2) >> ans.at(2).at(1) >> ans.at(2).at(2);

    cout << ans.at(R).at(C) << endl;

    return 0;
}