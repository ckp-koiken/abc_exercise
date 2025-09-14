#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  string S = to_string(N);
  int d = (int)S.size();

  for (int i = 0; i < d - 1; i++) {
    if (S[i] <= S[i + 1]) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}