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
vi2 rotate(vi2 a) {vi2 na; int sz = a.size(); rep(i,0,sz) {rep(j,0,sz) na.at(i).at(j) = a.at(sz-1-j).at(i);} return na;}
//　グリッド探索変数
vector<int> dj = {-1,0,1,-1,1,-1,0,1}, di = {-1,-1,-1,0,0,1,1,1};
string _s;

// `low`と`high`の両方向に展開して、すべての回文を検索します
void expand(string str, int low, int high, auto &set)
{
    //`str[low.high]`が回文でなくなるまで実行します
    while (low >= 0 && high < str.length() && str[low] == str[high])
    {
        //すべての回文をセットにプッシュします
        set.insert(str.substr(low, high - low + 1));
 
        //両方向に展開します
        low--, high++;
    }
}
 
//指定された文字列のすべての一意のパリンドローム部分文字列を検索する関数
vector<int> findPalindromicSubstrings(string str)
{   vector<int> ans;
    //すべての一意のパリンドロームサブストリングを格納するための空のセットを作成します
    unordered_set<string> set;
 
    for (int i = 0; i < str.length(); i++)
    {
        //`str[i]`を中点とするすべての奇数の長さの回文を検索します
        expand(str, i, i, set);
 
        //`str[i]`と`str[i+1]`が次のようになっているすべての偶数の長さの回文を検索します
        //その中点
        expand(str, i, i + 1, set);
    }
 
    //すべての一意のパリンドローム部分文字列を出力します
    for (auto i: set) {
        //cout << i << " ";
        ans.push_back(i.size());
    }
    return ans;
}


int main() {

    string S; cin >> S;
    int n = (int)S.size();
    vector<int> ans = findPalindromicSubstrings(S);
    cout << *max_element(ans.begin(),ans.end()) << "\n";

    
    
    return 0;
}