#include<bits/stdc++.h>
using namespace std;

int main() {
    
    long long combi(long long n, long long k) {
        if (n == k || k == 0)   return 1;
        else    return combi(n - 1, k - 1) + combi(n - 1, k);
    }

    cout << combi(10,3) << endl;
    return 0;
}