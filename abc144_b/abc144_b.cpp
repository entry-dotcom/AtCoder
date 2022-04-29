#include <bits/stdc++.h>
using namespace std;
// B 81
int main() {

int N, ans;
ans = -1;
cin >> N;
bool bo = true;

for (int i=0; i<10; i++) {
    for (int j=0; j<10; j++) {
        if (i*j == N) ans = i*j;
    }
}

if (ans != N) bo = false;

if (bo) cout << "Yes" << endl;
else cout << "No" << endl;


}