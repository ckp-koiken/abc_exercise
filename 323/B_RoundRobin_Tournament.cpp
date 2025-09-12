#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> win(N);

  for (int i = 0; i < N; i++) {
    string S;
    cin >> S;
    for (int j = 0; j < N; j++) {
      if (S.at(j) == 'o') {
        win.at(i)++;
      }
    }
  }

  int high = *max_element(win.begin(), win.end());
  while (high >= 0) {
    for (int i = 0; i < N; i++) {
      if (win.at(i) == high) {
        cout << i + 1 << " ";
      }
    }
    high--;
  }
  cout << endl;

  return 0;
}