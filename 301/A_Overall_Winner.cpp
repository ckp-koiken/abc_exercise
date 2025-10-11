#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;

  int win = round(N / 2.0);
  int t = 0;
  int a = 0;

  for (int i = 0; i < N; i++) {
    if (S[i] == 'T') t++;
    if (S[i] == 'A') a++;

    if (t == win) {
      cout << "T" << endl;
      return 0;
    } else if (a == win) {
      cout << "A" << endl;
      return 0;
    }
  }

  return 0;
}
