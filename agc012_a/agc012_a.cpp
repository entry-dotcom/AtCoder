#include <bits/stdc++.h>
using namespace std;
// A ???
//long long ans, N, i, a[300001];

int main(){

// いろいろ宣言（出力はintでは足りなくなる可能性あり）
long N, ans=0;
cin >> N;
vector<long> a(3*N+1);

// 入力
for (int i=1; i<N*3+1; i++) cin >> a.at(i);

// ソート
sort(a.begin(), a.end(), greater<long>());

// 入力要素数を昇順に３等分した２番目の和が答え
for (int i=1; i<2*N; i+=2) ans+=a.at(i);

cout << ans << endl;

}