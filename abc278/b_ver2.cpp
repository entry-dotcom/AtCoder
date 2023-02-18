#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

bool misjudge(int h, int m) {
    int h1 = h/10*10 + m/10;
    int m2 = h%10*10 + m%10;
    return h1<24 && m2<60;
}

int main() {

    int h, m;
    cin >> h >> m;

    while(!misjudge(h, m)) {
        m++;
        if (m==60) h++, m=0;
        if (h==24) h=0;
    }

    printf("%d %d\n", h,m);


    return 0;
}