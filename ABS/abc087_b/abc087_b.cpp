#include <bits/stdc++.h>
using namespace std;
// ABC081A-Placing Marbles

int main() {

int A, B, C, X=0, ans=0;
cin >> A; 
cin >> B;
cin >> C;
cin >> X;

for (int i=0; i<A+1; i++) {
    for (int k=0; k<B+1; k++) {
        for (int j=0; j<C+1; j++)
            if (500*i+100*k+50*j==X) ans++;
    }
}

cout << ans << endl;
}