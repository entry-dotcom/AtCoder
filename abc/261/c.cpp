#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {
    int N;
    cin >> N;
    vector<string> input_data(N);
    vector<int> output_num(N);
    rep(i, N) cin >> input_data[i];
    set<string> set_charactor;
    map<string, int> char_num;

    rep(i, N) {
        if (set_charactor.count(input_data[i])==false) {
            set_charactor.insert(input_data[i]);
            char_num[input_data[i]] = 0;
            cout << input_data[i] << endl;
        }
        else {
            char_num[input_data[i]]+=1;
            cout << input_data[i] << '(' << char_num[input_data[i]] << ')' << endl;
        }
    }
    
    return 0;
}