#include<bits/stdc++.h>
using namespace std;
int azi(int L, int i) {return L+i-1;}
int main() {
    int N, L, ones_azi=0, all_azi=0, ans=5e7;
    cin >> N >> L;
    vector<int> data(N+1);

    for (int j=1; j<N+1; j++) data.at(j)=azi(L, j);
    for (int j=1; j<N+1; j++) all_azi+=data.at(j);
    for (int j=1; j<N+1; j++) {
        if (abs(data.at(j)) <= abs(ans)) {
            ans = data.at(j);
        }
    }
    
    cout << all_azi-ans << endl;
}