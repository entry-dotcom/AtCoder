#include <bits/stdc++.h>
using namespace std;
// B Cakes and Donuts
int main() {

int N, price;
price = -100;
cin >> N;
bool bo = true;

for (int i=0; i<101; i++) {
    for (int j=0; j<101; j++) {
        if (7*j+4*i == N) price = 7*j+4*i;
    }
}

if (price != N) bo = false;

if (bo) cout << "Yes" << endl;
else cout << "No" << endl;


}