#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n;
    string s;
    queue<int> ans;
    cin >> n >> s;
    s = '0'+s;
    

    for (int i=1; i<n+1; i++) {
        int l=1, k=1;
        while(l+i<n+1) {
            if (s[k]!=s[k+i]) l++;
            else break;
            k++;  
        }
        ans.push(l);
        //cout << l << "\n";
    }
    //ans.pop();

    while(ans.size()>1) {
        int a=ans.front();
        cout << a-1 << "\n";
        ans.pop();
    }

    //cout << "\n" << ans.front();
    return 0;
}