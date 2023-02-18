#include <bits/stdc++.h>
using namespace std;
// C Big Array

int main() {

// 必要な変数、配列を定義
int N;
long K;
vector<long> cnt(100001);

// 変数および配列を入力
cin >> N >> K;

// 入力を配列に代入
for (int i=0; i<N; i++) {
    int a, b;
    cin >> a >> b;
    cnt.at(a) += b;
}

for (int ans=1; ans<100001; ans++) {
    if (K<=cnt.at(ans)) {
        cout << ans << endl;
        break;
    }
    K -= cnt.at(ans);
}

}