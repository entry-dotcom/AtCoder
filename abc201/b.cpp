#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n;
    cin >> n;
    vector<pair<int,string>> data(n);

    rep(i, n) cin >> data[i].second >> data[i].first;
    sort(data.begin(),data.end(),greater());
    
    cout << data[1].second << "\n";


    return 0;
}