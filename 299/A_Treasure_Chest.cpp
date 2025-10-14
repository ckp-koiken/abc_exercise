#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;

  int ast = 0;
  for (int i = 0; i < N; i++) { 
    if (S[i] == '*') ast = i;
  }

  bool bar_1 = false;
  bool bar_2 = false;
  for (int i = ast; i >= 0; i--) {
    if (S[i] == '|') bar_1 = true;
  }

  for (int i = ast; i < N; i++) {
    if (S[i] == '|') bar_2 = true;
  }

  if (bar_1 && bar_2) {
    cout << "in" << endl;
  } else {
    cout << "out" << endl;
  }

  return 0;
}
