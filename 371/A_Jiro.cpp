#include <bits/stdc++.h>
using namespace std;

int main() {
  string ab, ac, bc;
  cin >> ab >> ac >> bc;

  if (ab == "<") {
    if (ac == "<") {
      if (bc == "<") {
        cout << "B" << endl;
      } else {
        cout << "C" << endl;
      }
    } else { // a < b & a > c
      cout << "A" << endl;
    }
  } else { // a > b
    if (ac == "<") { // a > b & a < c
      cout << "A" << endl;
    } else { // a > b & a > c
      if (bc == "<") {
        cout << "C" << endl;
      } else {
        cout << "B" << endl;
      }
    }
  }
  return 0;
}