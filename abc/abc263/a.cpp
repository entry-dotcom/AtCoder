#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int A, B, C, D, E, num_full, num_not_full;
    cin >> A >> B >> C >> D >> E;

    set<int> S;
    S.insert(A); S.insert(B); S.insert(C); S.insert(D); S.insert(E);
    if (S.size()!=2) cout << "No" << "\n";
    else {
        map<int, int> ans;
        ans[A]++;
        ans[B]++;
        ans[C]++;
        ans[D]++;
        ans[E]++;
        if (ans[A]==3 | ans[B]==3 | ans[C]==3 | ans[D]==3 | ans[E]==3) cout << "Yes" << "\n";
        else cout << "No" << "\n";
    }




    return 0;
}