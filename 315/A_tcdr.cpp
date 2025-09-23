#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  for (char c : S) {
    if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
      cout << c;
    }
  }
  cout << endl;
  return 0;
}