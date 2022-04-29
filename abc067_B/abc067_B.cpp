#include <bits/stdc++.h>
using namespace std;
// B Cakes and Donuts
int main() {

int N, K, l;
l = 0;
cin >> N >> K;
vector<int> len(N);
for (int i=0; i<N; i++) cin >> len.at(i);
sort(len.begin(), len.end(), greater<int>());
for (int i=0; i<K; i++) l += len.at(i);

cout << l << endl;
}