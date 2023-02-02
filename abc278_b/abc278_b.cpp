#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

bool f(int h, int m) {
    int h2 = h/10*10 + m/10;
    int m2 = h%10*10 + m%10;
    return h2<=23 && m2<=59;
}

int main() {

    int h, m;
    cin >> h >> m;

    while(!f(h,m)) {
        m++;
        if (m==60) m = 0, h++;
        if (h==24) h = 0;
    }

    printf("%d %d\n", h, m);

    return 0;
}