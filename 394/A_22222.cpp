#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  for (char c : S) {
    if (c != '2') {
      continue;
    } else {
      cout << c;
    }
  }
  cout << endl;
  
  return 0;
}

// another answer
// 2の個数を数えてその数だけ2を出力する
// int k = count(s.begin(), s.end(), '2');
// cout << string(k, '2') << endl;