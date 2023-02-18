#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int A, B, H, M;
    cin >> A >> B >> H >> M;

    double angleH = 30*H+0.5*M;
    double angleM = 6*M;
    double Hx = A*cos(angleH*PI/180); double Hy = A*sin(angleH*PI/180);
    double Mx = B*cos(angleM*PI/180); double My = B*sin(angleM*PI/180);
    double ans=sqrt(pow(Hx-Mx,2)+pow((Hy-My),2));
    printf("%.20lf\n", ans);

    return 0;
}