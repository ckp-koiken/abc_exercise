#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  // A、B、Cそれぞれ100文字ずつ連結するすべての組み合わせを試して
  // Sと一致するものがあればYes
  for (int a = 0; a < 100; a++) {
    for (int b = 0; b < 100; b++) {
      for (int c = 0; c < 100; c++) {
        if (string(a, 'A') + string(b, 'B') + string(c, 'C') == S) {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }

  cout << "No" << endl;
  return 0;
}
