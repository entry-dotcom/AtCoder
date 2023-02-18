#include<bits/stdc++.h>
using namespace std;

int main() {

int N, K, now_max=-1;
cin >> N >> K;
vector<int> dislike(K+1);
vector<int> umasa(N+1);
bool p = true;

for (int i=1; i<N+1; i++) {
    cin >> umasa.at(i);
    if (umasa.at(i) > now_max) now_max = umasa.at(i);
}

for (int i=1; i<K+1; i++) {
    cin >> dislike.at(i);
    if (umasa.at(dislike.at(i)) == now_max) p=false;
}

if (p==true) cout << "No" << endl;
else cout << "Yes" << endl;



}
