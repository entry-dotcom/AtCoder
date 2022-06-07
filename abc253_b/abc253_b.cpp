#include <bits/stdc++.h>
using namespace std;
     
int main() {

int H, W, A, a_1, a_2, a_3, ans=0;
stack<int> spot;
cin >> H >> W;
A = H*W;
vector<char> S(A);

// for (int i=0; i<A; i++) S.at(i);
for (int i=0; i<A; i++) {
    cin >> S.at(i);
    //cout << S.at(i);
    if (S.at(i) == 'o') spot.push(i);
}

a_1 = spot.top(); spot.pop();
a_2 = spot.top();
//cout << a_1 << " " << a_2 << endl;
a_3 = (a_1 - a_2)%W;
//cout << a_3 << endl;
ans += a_3;
ans += (a_1 - a_2)%W + 1;
cout << ans << endl;

}
