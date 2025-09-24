#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  string s = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";

  for (int i = 0; i < N + 2; i++) {
    cout << s.at(i);
  }

  cout << endl;

  return 0;
}