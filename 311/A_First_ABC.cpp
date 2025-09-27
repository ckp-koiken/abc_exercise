#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;

  bool A = false;
  bool B = false;
  bool C = false;

  for (int i = 0; i < N; i++) {
    if (S.at(i) == 'A') A = true;
    if (S.at(i) == 'B') B = true;
    if (S.at(i) == 'C') C = true;

    if (A && B && C) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  
  return 0;
}
