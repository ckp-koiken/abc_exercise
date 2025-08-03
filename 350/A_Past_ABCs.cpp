#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  string s;
  s = S.substr(3);

  int N = stoi(s);

  if ((N >= 1 && N <= 315) || (N >= 317 && N <= 349)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}