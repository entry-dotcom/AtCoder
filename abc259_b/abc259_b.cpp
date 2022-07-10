#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    double a, b, d;
    cin >> a >> b >> d;
    double ans_x=0, ans_y=0;
    double angle;// = atan2(a, b)+d*PI/180;

    //cout << angle << endl;

    
    while(true) {
        if (a==0 | b==0) {
            if (a==0 & b==0) {
                printf("%.12lf", ans_x), printf(" "), printf("%.12lf\n", ans_y);
                break;
            }
            else if (a==0 & b!=0) {

            }
        }
        if (a!=0 & b!=0) {
            angle = atan2(abs(a), abs(b));
            angle += d*PI/180;
            ans = cos
        }
        else if (d==180) {
            printf("%.12lf", -a), printf(" "), printf("%.12lf\n", -b);
            break;
        }
        else if (d==360) {
            printf("%.12lf", a), printf(" "), printf("%.12lf\n", b);
            break;
        }
    }


    return 0;
}