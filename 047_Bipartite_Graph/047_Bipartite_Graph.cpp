#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;
int N, M;
vector<int> A(200001), B(200001), G[200001];
int color[200001];
void dfs(int pos) {
    // for (int i: G[pos])のような書き方を「範囲 for 文」と言う。
    for (int i:G[pos]) {
        if (color[i] == 0) {
            color[i] = 3 - color[pos];
            dfs(i);
        }
    }
}

int main() {

    cin >> N >> M;

    // 入力
    for (int i=1; i<M+1; i++) {
        cin >> A[i] >> B[i];
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }

    // 深さ優先探索
    for (int i=1; i<N+1; i++) color[i] = 0;
    for (int i=1; i<N+1; i++) {
        if (color[i]==0) {
            color[i] = 1;
            dfs(i);
        }
    }

    bool ans=true;
    for (int i=1; i<M+1; i++) {
        if (color[A[i]]==color[B[i]]) ans=false;
    }

    if (ans) cout << "Yes" << "\n";
    else cout << "No" << "\n";
    return 0;
}