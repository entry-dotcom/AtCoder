#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

struct ThreeValues {
    int first, second, third;
    void print() {
        cout << first << " " << second << " " << third << "\n";
    }
    void NO() {
        cout << -1 << " " << -1 << " " << -1 << "\n";
    }
} TV;

void check(int n, int y) {
    bool can = false;
    for (int i=0; i<n+1; i++) {
        for (int j=0; j<n+1-i; j++) {
            int k = n - i - j;
            if (i*10000+j*5000+k*1000==y) {
                can = true;
                TV.first = i;
                TV.second = j;
                TV.third = k;
                return TV.print();
            }
        }
    }
    if (!can) return TV.NO();
}


int main() {

    ll n, y;
    cin >> n >> y;
    check(n,y);
    
    return 0;
}