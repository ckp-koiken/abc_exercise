#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  bool logged_in = false;
  int unauthorized = 0;

  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;

    if (s == "login") {
      logged_in = true;
    }

    if (s == "logout") {
      logged_in = false;
    }

    if (s == "private" && !logged_in) {
      unauthorized++;
    }
  }

  cout << unauthorized << endl;

  return 0;
}