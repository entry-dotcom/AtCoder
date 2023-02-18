#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {

    double x1, x2, y1, y2, r1, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    double dist_of_two_center = sqrt(pow(x1-x2,2)+pow(y1-y2,2));

    while (true) {
        if (dist_of_two_center<=r1+r2) {
            if (dist_of_two_center==r1+r2) {
                cout << 4 << endl;
                exit(0);
            }
            if (dist_of_two_center+min(r1, r2)<max(r1,r2)) {
                cout << 1 << endl;
                exit(0);
            }
            if (dist_of_two_center+min(r1,r2)==max(r1,r2)) {
                cout << 2 << endl;
                exit(0);
            }
            else {
                cout << 3 << endl;
                exit(0);
            }
        }
        cout << 5 << endl;
        exit(0);
    }
    


    return 0;
}