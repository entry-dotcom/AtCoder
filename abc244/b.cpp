#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int N, now_direct=0;
    string T;
    cin >> N >> T;
    int direct[4]; rep(i, 4) direct[i]=0;

    rep(i, N) {
        if (T[i]=='S') {
            direct[now_direct%4]++;
        }
        else if (T[i]=='R') {
            now_direct++;
        }
    }

    cout << direct[0]-direct[2] << " " << -direct[1]+direct[3] << endl;


    return 0;
}