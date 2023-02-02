#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, m, sum=0;
    cin >> n >> m;
    map<int, int> a;

    for (int i=1; i<n+1; i++) {
        int ai;
        cin >> ai;
        sum += ai;
        a[ai]++;
    }

    vector<pair<int, int>> vec;
    for (auto i:a) vec.push_back(i);
    int k = vec.size();

    if (k==m) {
        cout << 0 << "\n";
        return 0;
    }

    int p;
    for (int i=0; i<(int)vec.size(); i++) {
        if (vec[(i+1)%k].first != (vec[i].first+1)%m) {
            p = i;
            break;
        }
    }

    return 0;
}