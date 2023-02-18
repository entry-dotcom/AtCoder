#include<bits/stdc++.h>
using namespace std;

int main() {
    int x[3], y[3], ans_x, ans_y;
    
    for (int i=0; i<3; i++) cin >> x[i] >> y[i];

    if (x[0]==x[1]) ans_x=x[2];
    if (x[1]==x[2]) ans_x=x[0];
    if (x[0]==x[2]) ans_x=x[1];
    if (y[0]==y[1]) ans_y=y[2];
    if (y[1]==y[2]) ans_y=y[0];
    if (y[0]==y[2]) ans_y=y[1];



    cout << ans_x << " " << ans_y << endl; 

    return 0;
}