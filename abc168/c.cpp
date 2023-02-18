#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    //入力
    double A, B, H, M;
    cin >> A >> B >> H >> M;

    //座標
    double angleM = 6*M;
    double angleH = 30*H+M/2;
    //cout << angleM << " " << angleH << endl;
    double Mx = B*cos(angleM*PI/180); double My = B*sin(angleM*PI/180);
    double Hx = A*cos(angleH*PI/180); double Hy = A*sin(angleH*PI/180);

    //答えを求める
    double ans = sqrt(pow(Mx-Hx,2)+pow(My-Hy,2));
    printf("%.20lf\n", ans);




    return 0;
}