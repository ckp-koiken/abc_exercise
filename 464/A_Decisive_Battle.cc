#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  vector<int> win(2);

  for (char c: S) {
    if (c == 'E') {
      win[0]++;
    } else {
      win[1]++;
    }
  }

  if (win[0] > win[1]) {
    cout << "East" << endl;
  } else {
    cout << "West" << endl;
  }

  return 0;
}
