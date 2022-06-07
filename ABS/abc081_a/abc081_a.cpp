#include <bits/stdc++.h>
using namespace std;
// ABC081A-Placing Marbles

int main() {

string s;
cin >> s;

if ((s=="100") || (s=="010") || (s=="001")) cout << 1 << endl;
else if ((s=="110") || (s=="101") || (s=="011")) cout << 2 << endl;
else if (s=="000") cout << 0 << endl;
else cout << 3 << endl;


}