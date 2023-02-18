#include<bits/stdc++.h>
using namespace std;

int main() {

    int N;
    double ans=0, ans_A=0, ans_B=0, A, B;

    cin >> N;
    for (int i=0; i<N; i++) {
        cin >> A;
        ans_A += A;
    }
    ans_A /= 3;

    for (int i=0; i<N; i++) {
        cin >> B;
        ans_B += B;
    }
    ans_B = ans_B * 2 / 3;

    printf("%.12lf\n", ans_A+ans_B);
    return 0;
}