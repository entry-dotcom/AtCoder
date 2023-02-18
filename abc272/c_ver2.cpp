#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int N, max_odd=-1, max_even=-1;
    cin >> N;
    vector<ll> odd, even;

    for (int i=0; i<N; i++) {
        int a;
        cin >> a;
        if (a%2==0) even.push_back(a);
        else odd.push_back(a);
    }

    sort(odd.rbegin(), odd.rend());
    sort(even.rbegin(), even.rend());

    if (odd.size()>1) max_odd = odd[0]+odd[1];
    if (even.size()>1) max_even = even[0]+even[1];

    cout << max(max_odd, max_even) << "\n";



    return 0;
}