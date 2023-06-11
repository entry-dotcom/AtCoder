#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int num_f=0, num_a=0, n;
    string s;
    cin >> n;

    rep(i,n) {
        cin >> s;
        if (s=="For") num_f++;
        else num_a++;   
    }

    cout << (num_f>num_a ? "Yes":"No") << "\n";

    
    return 0;
}