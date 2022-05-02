#include <bits/stdc++.h>
using namespace std;
// C Not so Diverse
int main() {

int ball_num, N, K, ans=0;
cin >> N >> K;
vector<int> variety_of_num(N+1);
queue<int> cnt;



// ボールの番号が登場した回数をカウント
for (int i=1; i<N+1; i++) {
    cin >> ball_num;
    variety_of_num.at(ball_num)++;
}
// 昇順ソート
sort(variety_of_num.begin(), variety_of_num.end());

int num_size = variety_of_num.size();

// ボールの番号が登場した回数をスタックに格納
for (int i=0; i<num_size; i++) cnt.push(variety_of_num.at(i));
int cnt_size = cnt.size();
while(cnt_size>K) {
    ans+=cnt.front();
    cnt.pop();
    cnt_size--;
}

cout << ans << endl;
}