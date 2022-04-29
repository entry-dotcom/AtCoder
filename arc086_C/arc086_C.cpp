#include <bits/stdc++.h>
using namespace std;
// C Not so Diverse
int main() {


int N, K, j=0, i=1, size_t, n_count, ans=0, count_num, num_pattern=0, change_num=0, kari_max, kari_ans;
int size = 0;
count_num = 0;
cin >> N >> K;
vector<int> ball_num(N+1);
vector<int> variety_of_num(N+1);
// vector<int> cnt(N);
queue<int> cnt;

map<int, int> count_map;

// ボールの番号を入力
for (int i=0; i<N; i++) cin >> count_map.at(i);
// sort(ball_num.begin(), ball_num.end());

bool b = true;
//sort(ans_num.begin(), ans_num.end());
kari_min = 200001;
while (true) {
    if(count_map.size()<K) {
        break;
    } else if (count_map.at(i)<kari_min) {
        kari_min = count_map.at(i);
        count_map.at(i)
    }
    }
        ans += cnt.front();
        cnt.pop();
    }
    else break;
}

/*
// それぞれのボールが出力される回数をvariety_of_numに格納
count_num = 0;
for (int k=1; k<N+1; k++) {
    count_num = count(ball_num.begin(), ball_num.end(), k);
    count_map.at(k) = count_num;
    //if (count_num!=0) cnt.push(count_num);
}
sort(variety_of_num.begin(), variety_of_num.end());
for (int i=0; i<variety_of_num.size(); i++) cnt.push(variety_of_num.at(i));

/*
vector<int> ans_num(cnt.size());
for (int i=0; i<cnt.size(); i++) {
    ans_num.at(i) = cnt.front();
    cnt.pop();
}
*/




cout << ans << endl;
}