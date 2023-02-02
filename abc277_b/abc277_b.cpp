#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n;
    cin >> n;
    string s[n];

    for (int i=0; i<n; i++) cin >> s[i];

    set<char> first;
    first.insert('H');
    first.insert('D');
    first.insert('C');
    first.insert('S');

    set<char> second;
    second.insert('A');
    second.insert('2');
    second.insert('3');
    second.insert('4');
    second.insert('5');
    second.insert('6');
    second.insert('7');
    second.insert('8');
    second.insert('9');
    second.insert('T');
    second.insert('J');
    second.insert('Q');
    second.insert('K');

    
    for (int i=0; i<n; i++) {
        if (!first.count(s[i][0])) {
            cout << "No" << "\n";
            return 0;
        }
    }
    
    for (int i=0; i<n; i++) {
        if (!second.count(s[i][1])) {
            cout << "No" << "\n";
            return 0;
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (s[i]==s[j]) {
                cout << "No" << "\n";
                return 0;
            }
        }
    }
    
    cout << "Yes" << "\n";

    return 0;
}