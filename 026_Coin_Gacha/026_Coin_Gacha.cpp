#include<bits/stdc++.h>
using namespace std;


int main() {

    double N, ans=0;
    cin >> N;

    for (int i=1; i<N+1; i++) {
        ans += N/i;
    }


    printf("%.12lf\n", ans);

    return 0;
}