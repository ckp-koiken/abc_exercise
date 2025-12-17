#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> week = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
  string S;
  cin >> S;

  for (int i = 0; i < 5; i++) {
    if (week[i] == S) {
      cout << 5 - i << endl;
      return 0;
    }
  }
  
  return 0;
}