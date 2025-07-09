#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, T, A;
  cin >> N >> T >> A;

  int check = N / 2 + 1;
  if (T >= check || A >= check) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}