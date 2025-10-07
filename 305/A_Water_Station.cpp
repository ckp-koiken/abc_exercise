#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  if (N % 5 >= 3) {
    cout << (N / 5 + 1) * 5 << endl;
  } else {
    cout << (N / 5) * 5 << endl;
  }

  return 0;
}
