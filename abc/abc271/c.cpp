#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
const double PI = 3.14159265358979;

int main() {

    int N;
    cin >> N;
    //deque<ll> a, ans;
    ll cnt = 0;
    vector<bool> set(N+2);
    
    for (int i=0; i<N; i++) {
        int a;
        cin >> a;
        set[min(N+1, a)] = true;
        //cin >> in;
        //a.push_back(in);
    }
    for (int read = 1;N >= 0;++ read) {
        N -= set[read] ? 1 : 2; // その巻を読むために使う本の冊数
        if (N < 0) cout << read - 1 << endl; // 本が無くなったら、無くなる直前の冊数を出力
    }
    /*
    if (N==1&&a.front()!=1) {
        cout << 0 << "\n";
        return 0;
    }
    else {
        while (N>=1) {
            if (a.front()==cnt) {
                //ans.push_back(a.front());
                a.pop_front();
                N--;
            }
            else {
                N -= 2;
                //ans.push_back(cnt);
                a.pop_back();
                a.pop_back();
            }
            cnt++;
        }
    }
    */

    //cout << cnt << "\n";
    return 0;
}