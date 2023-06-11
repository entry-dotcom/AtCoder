#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m), c(n+m);
    set<int> a_map, b_map;
    rep(i,0,n) {
        cin >> a[i];
        a_map.insert(a[i]);
    }

    rep(i,0,m) {
        cin >> b[i];
        b_map.insert(b[i]);
    }

    rep(i,0,n) c[i] = a[i];
    rep(i,0,m) c[i+n] = b[i];

    sort(c.begin(),c.end());
    //vector<int> itr;
    //itr = find(c.begin(), c.end(), c[2]);

    //rep(i,0,n+m) cout << c[i] << " ";
    /*
    rep(i,0,n+m) {
        if (a_map.count(c[i])) {
            cout << i+1 << " ";
        }
    }
    cout << endl;

    rep(i,0,m+n) {
        if (b_map.count(c[i])) {
            cout << i+1 << " ";
        }
    }
    cout << endl;
    */
    int a_index=0, b_index=0, index=0;
    queue<int> a_in, b_in;

    rep(i,0,n+m) {
        index++;
        if (a_map.count(c[i])) {
            a_index += index;
            a_in.push(index);
        }
        if (b_map.count(c[i])) {
            b_index += index;
            b_in.push(index);
        }
    }

    while(!a_in.empty()) {
        cout << a_in.front() << " ";
        a_in.pop();
    }
    cout << endl;

    while(!b_in.empty()) {
        cout << b_in.front() << " ";
        b_in.pop();
    }
    cout << endl;


    return 0;
}