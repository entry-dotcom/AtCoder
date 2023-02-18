#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {

    //入力
    ll ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;

    //ベクトル BA, BC, CA, CBの成分表示を求める
    ll BAx = ax - bx, BAy = ay - by;
    ll BCx = cx - bx, BCy = cy - by;
    ll CAx = ax - cx, CAy = ay - cy;
    ll CBx = bx - cx, CBy = by - cy;

    //どのパターンに当てはまるか求める
    int pattern = 2;
    if (BAx * BCx + BAy * BCy <0LL) pattern = 1;
    if (CAx * CBx + CAy * CBy <0LL) pattern = 3;

    //点と直線の距離を求める
    double ans = 0.0;
    if (pattern == 1) ans = sqrt(BAx * BAx + BAy * BAy);
    else if (pattern == 3) ans = sqrt(CAx * CAx + CAy * CAy);
    else {
        double S = abs(BAx * CAy - BAy * CAx);
        double BCLength = sqrt(BCx * BCx + BCy * BCy);
        ans = S/BCLength;
    }

    //答えを出力
    printf("%.12lf\n", ans);

    return 0;
}