#include <bits/stdc++.h>
using namespace std;
// A ???
long long ans, N, i, a[300001];

int main(){

cin >> N;

for (i=1; i<=N*3; i++) cin >> a[i];

sort(a+1, a+N*3+1);

for (i=N*3-1; i>=N+1; i-=2) ans+=a[i];

cout << ans << endl;

}