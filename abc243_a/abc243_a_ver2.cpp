#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int V, A, B, C;
    cin >> V >> A >> B >> C;

    V %= A+B+C;
    //if (V<A) printf("%s", "F");
    //else if (V<A+B) printf("%s", "M");
    //else printf("%s", "T");
    if (V<A) cout << "F\n";
    else if (V<A+B) cout << "M\n";
    else cout << "T\n";

    return 0;
}