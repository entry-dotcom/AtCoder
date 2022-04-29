#include <bits/stdc++.h>
using namespace std;
 
int main() {
  // 色々定義する
  vector<int64_t> lucas_vec(86+1);
  lucas_vec.at(0) = 2;
  lucas_vec.at(1) = 1;
  int N;
  cin >> N;
  
  for (int i = 2; i < 87; i++)
    lucas_vec.at(i) = lucas_vec.at(i-1) + lucas_vec.at(i-2);
  cout << lucas_vec.at(N) << endl;

}