#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int V, A, B, C, quan[3];
    string human[3];
    cin >> V >> A >> B >> C;
    quan[0]=A; quan[1]=B; quan[2]=C;
    human[0]="F"; human[1]="M"; human[2]="T";

    while(true) {
        rep(i, 3) {
            if (V-quan[i]>=0) V -= quan[i];
            else {printf("%s",human[i].c_str()); return 0;} 
        }
    }

    return 0;
}