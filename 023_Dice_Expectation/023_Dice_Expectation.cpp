#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {

    double ans_r=0, ans_b=0, N;

    cin >> N;

    for (int i=0; i<N; i++) {
        double b;
        cin >> b;
        ans_b += b;
    }
    for (int i=0; i<N; i++) {
        double r;
        cin >> r;
        ans_r += r;
    }

    cout << fixed << setprecision(12) << (ans_r+ans_b)/N << endl;
    return 0;
}