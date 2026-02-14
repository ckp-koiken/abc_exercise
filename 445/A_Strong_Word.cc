#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  // memo:
  // S[0]はS.front()でもよい
  if (S[0] == S.back()) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}