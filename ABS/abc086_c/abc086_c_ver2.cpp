#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

struct Output {
    int first, second, third;
    void YES() {cout << "Yes" << "\n";}
    void NO() {cout << "No" << "\n";}
} Out;

void can(int n,vector<int>t, vector<int>x, vector<int>y) {
    bool check = true;
    rep(i,n) {
        int dt = abs(t[i] - t[i+1]);
        int dx = abs(x[i] - x[i+1]);
        int dy = abs(y[i] - y[i+1]);
        if (dt>dx+dy) {
            if (dt%2!=(dx+dy)%2) check = false;
        }
        else if (dt<dx+dy) check = false;
    }
    (check ? Out.YES():Out.NO());
}

int main() {

    int n;
    cin >> n;
    vector<int> t(n+1), x(n+1), y(n+1);
    for (int i=1; i<n+1; i++) cin >> t[i] >> x[i] >> y[i];

    can(n,t,x,y);

    return 0;
}