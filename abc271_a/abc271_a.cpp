#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;
string capitalizeString(string s)
{
    transform(s.begin(), s.end(), s.begin(),
                   [](unsigned char c){ return toupper(c); });
    return s;
}

int main() {

    int N;
    cin >> N;
    
    if (N>15) {
        stringstream s;
        s << hex << N;
        string ans = s.str();
        cout << capitalizeString(ans) << "\n";
    }
    else {
        stringstream s; 
        s << hex << N;
        string ans = s.str();
        cout << '0'+capitalizeString(ans) << "\n";
    } 
    
    
    

    return 0;
}