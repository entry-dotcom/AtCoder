#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
ll cross(ll ax, ll ay, ll bx, ll by) {return ax*by-ay*bx;}
const double PI = 3.14159265358979;

int main() {

    //入力
    ll x1, x2, x3, x4, y1, y2, y3, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    
    ll ans1 = cross(x2-x1, y2-y1, x3-x1, y3-y1);
    ll ans2 = cross(x2-x1, y2-y1, x4-x1, y4-y1);
    ll ans3 = cross(x4-x3, y4-y3, x1-x3, y1-y3);
    ll ans4 = cross(x4-x3, y4-y3, x2-x3, y2-y3);

    if (ans1==0 & ans2==0 & ans3==0 & ans4==0) {
        pair<ll, ll> A = make_pair(x1, y1);
        pair<ll, ll> B = make_pair(x2, y2);
        pair<ll, ll> C = make_pair(x3, y3);
        pair<ll, ll> D = make_pair(x4, y4);
        if (A > B) swap(A, B);
		if (C > D) swap(C, D);
		if (max(A, C) <= min(B, D)) cout << "Yes" << endl;
		else cout << "No" << endl;
		return 0;
    }
    
    // そうでない場合
	// IsAB: 線分 AB が点 C, D を分けるか？
	// IsCD: 線分 CD が点 A, B を分けるか？
	bool IsAB = false, IsCD = false;
	if (ans1 >= 0 && ans2 <= 0) IsAB = true;
	if (ans1 <= 0 && ans2 >= 0) IsAB = true;
	if (ans3 >= 0 && ans4 <= 0) IsCD = true;
	if (ans3 <= 0 && ans4 >= 0) IsCD = true;
	
	// 答えの出力
	if (IsAB == true && IsCD == true) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

    return 0;
}