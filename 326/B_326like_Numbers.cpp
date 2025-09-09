#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  for (int i = N; i <= 919; i++) {
    string s = to_string(i);
    int a = s.at(0) - 48;
    int b = s.at(1) - 48;
    int c = s.at(2) - 48;
    if (a * b == c) {
      cout << i << endl;
      return 0;
    }
  }

  return 0;
}