#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int A = 0;
  // vector<int> a; // 配列を用意して追加してく方法でもよい
  for (int i = 1; i < S.size(); i++) {
    if (S.at(i) == '-') {
      A++;
    } 
    
    if (S.at(i) == '|') {
      cout << A << " ";
      // a.push_back(A);
      A = 0;
    }
  }

  // for (int x : a) {
  //   cout << x << " ";
  // }

  cout << endl;

  return 0;
}