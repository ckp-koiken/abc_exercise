#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;

  int num_s = (int)S.size();
  string sub_t = T.substr(0, num_s);

  if (S == sub_t) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}