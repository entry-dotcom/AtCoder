#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;
vector<int> in(5);

int main() {

    rep(i, 5) cin >> in[i];

    sort(in.begin(), in.end());

    if ((in[0]==in[2] & in[3]==in[4]) | (in[0]==in[1] & in[2]==in[4])) printf("Yes");
    else printf("No");
    cout << endl;


    return 0;
}