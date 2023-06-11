#include <bits/stdc++.h>
using namespace std;
// B Cakes and Donuts
int main() {

int N, M, a, b, count_num;
cin >> N >> M;
vector<int> load_to_load(2*M);
vector<int> count_load(N);

for (int i=0; i<2*M; i+=2) {
    cin >> a >> b;
    load_to_load.at(i) = a;
    load_to_load.at(i+1) = b;
}

sort(load_to_load.begin(), load_to_load.end());
for (int i=0; i<N; i++) {
    count_num = 0;
    for (int j=0; j<2*M; j++){
        if (load_to_load.at(j) == i+1) count_num += 1;
    count_load.at(i) = count_num;
    }
}

for (int i=0; i<N; i++) cout << count_load.at(i) << endl;
}