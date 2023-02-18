#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;
double Cross(int x1, int x2, int y1, int y2) {
    int cross = x1*y2 - x2*y1;
    return cross;
}

int main() {



    int Ax, Ay, Bx, By, Cx, Cy, Dx, Dy;
    cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy >> Dx >> Dy;
    int DAx = Ax - Dx; int DAy = Ay - Dy;
    int ABx = Bx - Ax; int ABy = By - Ay;
    int BCx = Cx - Bx; int BCy = Cy - By;
    int CDx = Dx - Cx; int CDy = Dy - Cy; 
    
    double A = Cross(DAx, ABx, DAy, ABy);
    double B = Cross(ABx, BCx, ABy, BCy);
    double C = Cross(BCx, CDx, BCy, CDy);
    double D = Cross(CDx, DAx, CDy, DAy);

    if (A>0) {
        if (B>0) {
            if (C>0) {
                if (D>0) {
                    cout << "Yes" << "\n";
                    return 0;
                }
            }
        }
    }

    cout << "No" << "\n";

    return 0;
}