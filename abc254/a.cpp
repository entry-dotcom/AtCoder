#include <bits/stdc++.h>
using namespace std;
// A - Last Two Digits

int main() {

string s;cin>>s; //数値を文字列として受け取る
    vector<int> v(s.size()); //文字列の長さでvectorを宣言

    for(int i=0;i<s.size();i++){
        v.at(i)=(int)(s[i]-'0'); //ここで文字列のi番目の要素を数値に変換してvectorに突っ込む
        //cout<<v.at(i); //処理
        }

cout << v.at(1) << v.at(2) << endl;
}
