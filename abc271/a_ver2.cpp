#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int N;
    cin >> N;
    
    int a = N/16;
    int b = N%16;

    if (a<=9) cout << a;
    else  cout << (char) ('A'+(a-10));
    
    if (b<=9) cout << b;
    else  cout << (char) ('A'+(b-10));
    cout << endl;
    

    return 0;
}