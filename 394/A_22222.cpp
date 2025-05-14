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