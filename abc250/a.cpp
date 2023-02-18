#include<bits/stdc++.h>
using namespace std;

int main() {
    int R, H, C, W, ans=0;
    cin >> H >> W;
    cin >> R >> C;

    if (R==H && R==1) ans+=0;
    else if (R>1 && R<H) ans+=2;
    else ans++;
    if (C==W && C==1) ans+=0;
    else if (C>1 && C<W)ans+=2;
    else ans++;
  
    cout << ans << endl;
}