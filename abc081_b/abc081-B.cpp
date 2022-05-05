#include <bits/stdc++.h>
using namespace std;
     
int main() {

bool bo = true;
int N, count_num;
count_num = 0;
cin >> N;
vector<int> num_list(N);

for (int i=0; i<N; i++) cin >> num_list.at(i);

while (true) {
    for (int i=0; i<N; i++)
        if (num_list.at(i)%2 == 1) bo = false;
    if (bo == false) break;
    for (int i=0; i<N; i++) num_list.at(i) /= 2;
    count_num += 1;
}

cout << count_num << endl;

}