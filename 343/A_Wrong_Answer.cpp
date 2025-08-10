#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  int c = A + B;

  for (int i = 0; i < 10; i++) {
    if (i != c) {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}