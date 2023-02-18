#include<bits/stdc++.h>
using namespace std;

int main() {
    
    long long K, N, human_index;
    long long ans=1e15;
    cin >> N >> K;
    vector<int> A(K+1);
    vector<double> longest_vec(K+1);
    vector<vector<int> > akari(N+1, vector<int>(3));

    for (int i=1; i<K+1; i++) cin >> A.at(i);
    for (int i=1; i<N+1; i++) cin >> akari.at(i).at(1) >> akari.at(i).at(2);

    for (int i=1; i<A.size(); i++) {
        human_index = A.at(i);
        double long_dist=0, longest_dist=-1;
        for (int j=1; j<N+1; j++){
            long_dist = sqrt(pow(akari.at(human_index).at(1) - akari.at(j).at(1) ,2)
                           + pow(akari.at(human_index).at(2) - akari.at(j).at(2) ,2));
            if (long_dist >= longest_dist) longest_dist = long_dist;
            }
        longest_vec.at(i) = longest_dist;
    }

    for (int i=1; i<K+1; i++) {
        if (ans>=longest_vec.at(i)) ans=longest_vec.at(i);
    }

    cout << ans << setprecision(10);
    
    return 0;
}