#include<bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, D, E, F, X, ans_Takahashi=0, ans_Aoki=0;
    cin >> A >> B >> C >> D >> E >> F >> X;

    ans_Takahashi = X/(A+C)*A*B+min(X%(A+C), A)*B;
    ans_Aoki = X/(D+F)*D*E+min(X%(D+F), D)*E;

    if (ans_Takahashi > ans_Aoki) cout << "Takahashi" << endl;
    else if (ans_Takahashi < ans_Aoki) cout << "Aoki" << endl;
    else cout << "Draw" << endl;

    return 0;
}