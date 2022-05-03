#include <bits/stdc++.h>
using namespace std;
// B-Card Game for Two

int main(){
int N, Alice_score=0, Bob_score=0;
cin >> N;
vector<int> A(N);
for (int i=0; i<N; i++) cin >> A.at(i);


sort(A.begin(), A.end());
reverse(A.begin(), A.end());

for (int j=0; j<N; j++) {
    if (j%2==0) {
        Alice_score += A.at(j);
    } else {
        Bob_score += A.at(j);
    }
}

cout << (Alice_score - Bob_score) << endl;

}