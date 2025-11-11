#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;

  for (int i = 1; i < N; i++) {
    for (int j = 1; j <= N; j++) {
      if (S[j - 1] == S[i + j - 1]) {
        cout << j - 1<< endl;
        break;
      }

      if (i + j > N) {
        cout << j - 1 << endl;
        break;
      }
    }
  }
  return 0;
}