#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;
int H, W, sy, sx, gy, gx, start, goal;
// グラフ・最短経路

vector<int> G[2501];

char c[51][51];
int dist[2501];

int main() {

    cin >> H >> W >> sx >> sy >> gx >> gy;
    start = sx * W + sy;
    goal = gx * W + gy;

    return 0;
}