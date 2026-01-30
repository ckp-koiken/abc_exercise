#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int n = (int)S.size();

  int is_upper = 0;
  int is_lower = 0;
  for (char c : S) {
    if (isupper(c)) is_upper++;
    if (islower(c)) is_lower++;
  }

  set<char> se(S.begin(), S.end());
  int size_check = (int)se.size();

  if (is_upper > 0 && is_lower > 0 && size_check == n) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}