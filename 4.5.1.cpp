#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;
int N, M, A[100009], B[100009];
vector<int> G[100009];

int main() {

    // 入力
    cin >> N >> M;
    for (int i=1; i<M+1; i++) {
        cin >> A[i] >> B[i];
        G[A[i]].push_back(B[i]); // 頂点 A[i] に隣接する頂点として B[i] を追加
        G[B[i]].push_back(A[i]); // 頂点 B[i] に隣接する頂点として A[i] を追加
    }

    // 出力 (G[i].size() は頂点 i に隣接する頂点のリストの大きさ = 次数)
    for (int i=1; i <N+1; i++) {
        cout << i << ": {";
        for (int j=0; j<(int)G[i].size(); j++) {
            if (j >= 1) cout << ","; // コンマ区切りで出力する
            cout << G[i][j]; // G[i][j] は頂点 i に隣接する頂点のうち j 番目のもの
        }
        cout << "}" << endl;
    }

    

    return 0;
}