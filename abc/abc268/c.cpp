#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int N, p[200001];
    cin >> N;
    rep(i, N) cin >> p[i];
    
    int kari_max = -1;
    for (int i=0; i<N; i++) {
        int kari_ans = 0;
        for (int j=0; j<N; j++) {
            if (p[i]==i || (i-1)%N==j || (i+1)%N==j) kari_ans++;
        }
        if (kari_max<=kari_ans) kari_max = kari_ans;
    }

    cout << kari_max << endl;

    return 0;
}