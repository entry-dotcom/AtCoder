#include <bits/stdc++.h>
using namespace std;
     
int main() {

int N;
cin >> N;
vector<vector<int> > data(N, vector<int>(N));

for (int i=0; i<N; i++) {
    for (int j=0; j<N; j++) {
        if (j>i) {
            continue;
        }
        else if (j==0) {
            data.at(i).at(j) = 1;
            cout << data.at(i).at(j);
        }
        else if (j==i) {
            data.at(i).at(j) = 1;
            cout << " " << data.at(i).at(j);
        
        }
        else {
            data.at(i).at(j) = data.at(i-1).at(j-1) + data.at(i-1).at(j);
            cout << " " << data.at(i).at(j);
        }
    }
    cout << "\n";
    
}


}