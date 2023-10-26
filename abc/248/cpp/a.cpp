#include<bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;
    set<char> ch;

    for (int i=0; i<=s.size(); i++) ch.insert(s[i]);
    for (char i='0'; i<='9'; i++) {
        if (!ch.count(i)) cout << i << endl;
    }
    
    return 0;
}