#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int H, W, sy, sx, gy, gx, start, goal;
    cin >> H >> W;
    cin >> sx >> sy; 
    cin >> gx >> gy;
    sy--, sx--, gy--, gx--;
    start = W*sx+sy; goal = W*gx+gy;
    
    vector<string> maze(H);
    vector<int> graph[W*H];
    vector<int> dist(W*H,-1);

    rep(i,H) cin >> maze[i];

    //　横方向，縦方向それぞれでグラフとして追加
    rep(i,H) {
        rep(j,W) {
            // 横方向
            int dx1 = i*W+j, dx2 = i*W+(j+1);
            if (maze[i][j]=='.' && maze[i][j+1]=='.') {
                graph[dx1].push_back(dx2);
                graph[dx2].push_back(dx1);
            }
        }
    }
    rep(i,H) {
        rep(j,W) {
            // 縦方向
            int dy1 = i*W+j, dy2 = (i+1)*W+j;
            if (maze[i][j]=='.' && maze[i+1][j]=='.') {
                graph[dy1].push_back(dy2);
                graph[dy2].push_back(dy1);
            }
        }
    }
    
    queue<int> q;
    q.push(start);
    dist[start] = 0;
    
    //　幅優先探索
    while(!q.empty()) {
        int pos = q.front();
        q.pop();
        for (auto i:graph[pos]) {
            int next = graph[pos][i];
            if (dist[next]==-1) {
                dist[next] = dist[pos]+1;
                q.push(next);
            }
        }
    }

    cout << dist[goal] << "\n";
    
    

    return 0;
}