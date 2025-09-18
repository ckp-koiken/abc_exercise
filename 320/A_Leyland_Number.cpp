#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  int left = 1;
  int right = 1;
  for (int i = 0; i < B; i++) {
    left *= A;
  }

  for (int i = 0; i < A; i++) {
    right *= B;
  }

  cout << left + right << endl;
  return 0;
}