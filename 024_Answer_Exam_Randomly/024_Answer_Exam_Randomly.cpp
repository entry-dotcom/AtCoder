#include<bits/stdc++.h>
using namespace std;

int main() {

    int N;
    double P, Q, ans=0;

    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> P >> Q;
        ans += Q/P;
    }

    printf("%.12lf\n", ans);

    return 0;
}