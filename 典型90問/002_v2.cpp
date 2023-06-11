#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
#define rep_bit(i, start, n) for (int i = start; i < (1<<n); i++)
const double PI = 3.14159265358979;
// 10進数の格桁の和
int sum_digit(int n) {int ans = 0; while(n>0) { ans += n%10; n /= 10;} return ans;}

bool check(string s) {
    int l = 0, r = 0;
    rep(i,0,(int)s.size()) {
        if (s[i]=='(') l++;
        if (s[i]==')') r++;
        if (l<r) return false;
    }
    return (l==r ? true:false);
}

int main() {

    int n;
    cin >> n;

    for (int bit=0; bit < (1<<n); bit++) {
        string s = "";
        int l = 0, r = 0;
        for (int i=n-1; i>-1; i--) {
            if ((bit & (1<<i))==0) {s += "("; l++;} 
            else {s += ")"; r++;}
            //if (l<r) break;
        }
        cout << s << "\n";
        //if (r==l) cout << s << "\n";

        
        
        
    }
    cout << (1<<2);

    return 0;
}