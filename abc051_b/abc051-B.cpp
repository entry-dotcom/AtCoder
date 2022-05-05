#include <bits/stdc++.h>
using namespace std;
     
int main() {

int K, S,count_num;
count_num = 0;
cin >> K >> S;

for (int X=0; X<K+1; X++) {
    for (int Y=0; Y<K+1; Y++) {
        int Z = S - X - Y;
        if ((Z <= K) && (Z >= 0)) {
            count_num +=1;
        }
    }
}

cout << count_num << endl;
}