#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n;
    cin >> n;
    //vector<string> w(n);
    set<string> word;
    word.insert("and");
    word.insert("not");
    word.insert("the");
    word.insert("you");
    word.insert("that");
    bool ans = false;

    rep(i,0,n) {
        string w;
        cin >> w;
        if (word.count(w)) {
            ans = true;
            break;
        }
    }

    cout << (ans ? "Yes":"No") << "\n";


    return 0;
}