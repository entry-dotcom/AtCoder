#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    string S;
    cin >> S;
    
    if (S=="Monday") cout << 5 << "\n";
    else if(S=="Tuesday") cout << 4 << "\n";
    else if(S=="Wednesday") cout << 3 << "\n";
    else if(S=="Thursday") cout << 2 << "\n";
    else if(S=="Friday") cout << 1 << "\n";

    return 0;
}