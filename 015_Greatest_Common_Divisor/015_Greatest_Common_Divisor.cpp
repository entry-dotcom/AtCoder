#include<bits/stdc++.h>
using namespace std;
int GCD(int A, int B) {
    while(A>0 && B>0) {
        if (A >= B) A = A%B;
        else B = B%A;
    }
    if (A>0) return A;
    else return B;
}

int main() {

    int A, B;
    cin >> A >> B;

    cout << GCD(A, B) << endl;

    return 0;
}