#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {
    
    int H, W, sy, sx, gy, gx, start, goal;

    // グラフ・最短経路
    int dist[2501];
    vector<int> G[2501];
    cin >> H >> W;
    cin >> sx >> sy; start = sx*W+sy; // スタートの座標(sx, sy) と頂点番号 sx*W+sy
    cin >> gx >> gy; goal = gx*W+gy; // ゴールの座標(gx, gy) と頂点番号 gx*W+gy
    vector<string> c(H+1);

    // 入力
    //for (int i=1; i<H+1; i++) {
    //    for (int j=1; j<W+1; j++) cin >> c[i][j];
    //}
    for (int i=1; i<H+1; i++) cin >> c[i];
    
    
    // 横方向の辺 [(i, j) - (i, j+1)] をグラフに追加
    for (int i=1; i<H+1; i++) {
        for (int j=1; j<W; j++) {
            int idx1 = i * W + j;
            int idx2 = i * W + (j+1);
            if (c[i][j]=='.' & c[i][j+1]=='.') {
                G[idx1].push_back(idx2);
                G[idx2].push_back(idx1);
            }
            idx1 = i * W + j;
            idx2 = (i+1) * W + j;
            if (c[i][j]=='.' & c[i+1][j]=='.') {
                G[idx1].push_back(idx2);
                G[idx2].push_back(idx1);
            }
        }
    }

    // 幅優先探索の初期化
    for (int i=1; i<H*W+1; i++) dist[i] = -1;
    queue<int> Q;
    Q.push(start); dist[start] = 0;

    while(!Q.empty()) {
        int pos = Q.front();
        Q.pop();
        for (int i=0; i<G[pos].size(); i++) {
            int nex = G[pos][i];
            if (dist[nex] == -1) {
                dist[nex] = dist[pos] + 1;
                Q.push(nex);
            }
        }
    }

    cout << dist[goal] << "\n";

    return 0;
}