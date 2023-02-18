#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, A, B, ans=0;
    cin >> N >> A >> B;
    vector<vector<string> > data(N*A, vector<string>(N*B)); 
    for (int i=0; i<N*A; i++) {
        for (int j=0; j<N*B; j++) {
            data.at(i).at(j) = ".";
        }
    }

    
    for (int i=0; i<N*A; i++) {
        for (int j=0; j<N*B; j++) {
            if ((i/A%2==0 && j/B%2==1) | (i/A%2==1 && j/B%2==0)) data.at(i).at(j) = "#";
        }
    }
    
    for (int i=0; i<N*A; i++) {
        for (int j=0; j<N*B; j++) {
            cout << data.at(i).at(j);
        }
        cout << "\n";
    }
}