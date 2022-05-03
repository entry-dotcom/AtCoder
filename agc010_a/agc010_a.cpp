#include <bits/stdc++.h>
using namespace std;
     
int main(){
      	
int N;
vector<int> cnt(2);
cin >> N;
vector<int> A(N);

for (int i=0; i<N; i++) {
    cin >> A.at(i);
    cnt.at(A.at(i)%2)++;
}

if (cnt.at(1)%2==1) cout << "NO" << endl;
else cout << "YES" << endl;
}