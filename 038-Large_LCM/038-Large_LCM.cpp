#include <bits/stdc++.h>
using namespace std;
     
int main() {

long long GCD(long long A, long long B) {
    while (A >= 1 && B >= 1) {
        if (A < B) B = B % A;
        else A = A % B;
    }
    if (A >= 1) return A;
    else B;
}

   
}