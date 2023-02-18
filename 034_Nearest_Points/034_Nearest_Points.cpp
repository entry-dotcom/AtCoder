#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {

    int N;
    cin >> N;
    double x[N], y[N];
    rep(i, N) cin >> x[i] >> y[i];
    double ans=100000000;

    for (int i=0; i<N; i++) {
        for (int j=i+1; j<N; j++) {
            if (ans>=sqrt(pow(x[j]-x[i],2)+pow(y[j]-y[i],2))) ans=sqrt(pow(x[j]-x[i],2)+pow(y[j]-y[i],2));
        }
    }

    printf("%.28lf\n", ans);

    return 0;
}