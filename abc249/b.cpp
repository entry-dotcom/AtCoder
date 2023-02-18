#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool upper=false, lower=false;
    set<char> st;

    for (int i=0; i<s.size(); i++) {
        if (isupper(s.at(i))) upper = true;
        if (islower(s.at(i))) lower = true;
        st.insert(s.at(i));
    }

    if (upper && lower && st.size()==s.size()) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}