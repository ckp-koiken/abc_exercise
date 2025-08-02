#include <bits/stdc++.h>
using namespace std;

int main() {
  int sum_A = 0, sum_B = 0;
  int a, b;
  for (int i = 0; i < 9; i++) {
    cin >> a;
    sum_A += a;
  }

  for (int i = 0; i < 8; i++) {
    cin >> b;
    sum_B += b;
  }

  cout << sum_A - sum_B + 1 << endl;
  return 0;
}