#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define rep(i, start, n) for (int i = start; i < (int)(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
// 1次元，２次元ベクトルの簡略化
#define vi1 vector<int>
#define vll1 vector<ll>
#define vi2 vector<vector<int>>
#define vll2 vector<vector<ll>>
// 大きい値
const ll mod1 = 1000000007;
const double PI = 3.14159265358979;
const int INF = 2000000000;
// 10進数の格桁の和
int sum_digit(int n) {int ans = 0; while(n>0) { ans += n%10; n /= 10;} return ans;}
//　行列の 90 度回転
vector<vector<char>> rotate(vector<vector<char>> a) {
    vector<vector<char>> na(4,vector<char>(4));
    rep(i,0,4) {
        rep(j,0,4) na.at(i).at(j) = a.at(4-1-j).at(i);
    }
    return na;
}
//　グリッド探索変数
vector<int> dj = {-1,0,1,-1,1,-1,0,1}, di = {-1,-1,-1,0,0,1,1,1};

// 2次元配列の右シフト
vector<vector<char>> column_shift(vector<vector<char>> check_sheet) {
    vector<vector<char>> ans(4,vector<char>(4));
    rep(i,0,4) {
        rep(j,0,4) {
            ans.at(i).at((j+1)%4) = check_sheet.at(i).at(j);
        }
    }
    return ans;
}

// 2次元配列の下シフト
vector<vector<char>> row_shift(vector<vector<char>> check_sheet) {
    vector<vector<char>> ans(4,vector<char>(4));
    rep(i,0,4) {
        rep(j,0,4) {
            ans.at((i+1)%4).at(j%4) = check_sheet.at(i).at(j);
        }
    }
    return ans;
}

    

// void solve(vector<vector<char>> a, vector<vector<char>> p2, vector<vector<char>> p3) {
// }

int main() {

    vector<vector<char>> p1(4,vector<char>(4));
    vector<vector<char>> p2(4,vector<char>(4));
    vector<vector<char>> p3(4,vector<char>(4));
    rep(i,0,4) rep(j,0,4) cin >> p1.at(i).at(j);
    rep(i,0,4) rep(j,0,4) cin >> p2.at(i).at(j);
    rep(i,0,4) rep(j,0,4) cin >> p3.at(i).at(j);

    rep(_1,0,4) {
        p1 = column_shift(p1);
        rep(_2,0,4) {
            p1 = row_shift(p1);
            // rep(i,0,4) {
            //     rep(j,0,4) cout << p1.at(i).at(j);
            //     cout << endl;
            // }
            // cout << endl;
            rep(rot2,0,4) {
                p2 = rotate(p2);
                rep(rot3,0,4) {
                    p3 = rotate(p3);
                    vector<vector<char>> check_sheet(4,vector<char>(4,'.'));
                    vector<vector<int>> check_sheet_point(4,vector<int>(4,0));
                    rep(i,0,4) rep(j,0,4) if (p1.at(i).at(j)=='#') check_sheet_point.at(i).at(j)++;
                    check_sheet = p1;
                    //p2を当てはめる
                    rep(i2,0,4) {
                        rep(j2,0,4) {
                            rep(k2,0,4) {
                                rep(l2,0,4) {
                                    int di2 = i2+k2, dj2 = j2+k2;
                                    if ((0<=di2 && di2<4) && (0<=dj2 && dj2<4)) {
                                        check_sheet.at(di2).at(dj2) = p2.at(di2).at(dj2);
                                        if (p2.at(di2).at(dj2)=='#') check_sheet_point.at(di2).at(dj2)++;
                                    }
                                }
                            }
                        }
                    }
                    //p3を当てはめる
                    rep(i2,0,4) {
                        rep(j2,0,4) {
                            rep(k2,0,4) {
                                rep(l2,0,4) {
                                    int di2 = i2+k2, dj2 = j2+k2;
                                    if ((0<=di2 && di2<4) && (0<=dj2 && dj2<4)) {
                                        check_sheet.at(di2).at(dj2) = p3.at(di2).at(dj2);
                                        if (p3.at(di2).at(dj2)=='#') check_sheet_point.at(di2).at(dj2)++;
                                    }
                                }
                            }
                        }
                    }
                    bool check = true;
                    rep(i,0,4) rep(j,0,4) {
                        if (check_sheet.at(i).at(j)=='.' || check_sheet_point.at(i).at(j)!=1) check = false;
                    }
                    if (check) {cout << "Yes" << "\n"; return 0;}
                }
            }
        }
    }
        
        
    

    // rep(i,0,4) {
    //     rep(j,0,4) {

    //     }
    // }
    // 
    
    cout << "No" << "\n";
    return 0;
}