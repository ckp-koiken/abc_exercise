#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<string> S(N);

  for (int i = 0; i < N; i++) {
    cin >> S.at(i);
  }

  vector<int> result(M);
  for (int j = 0; j < M; j++) {
    int x = 0;
    int y = 0;
    for (int i = 0; i < N; i++) {
      if (S.at(i).at(j) == '0') {
        x++;
      } else {
        y++;
      }
    }
    if (x == 0 || y == 0) {
      result.at(j) = -1;
    } else if (x < y) {
      result.at(j) = 0;
    } else {
      result.at(j) = 1;
    }
  }

  vector<int> player(N);
  for (int j = 0; j < M; j++) {
    for (int i = 0; i < N; i++) {
      if (result.at(j) == 0) {
        if (S.at(i).at(j) == '0') player.at(i)++;
      } else if (result.at(j) == 1) {
        if (S.at(i).at(j) == '1') player.at(i)++;
      } else {
        player.at(i)++;
      }
    }
  }

  int high = 0;
  for (int i = 0; i < N; i++) {
    high = max(high, player.at(i));
  }

  for (int i = 0; i < N; i++) {
    if (player.at(i) == high) {
      cout << i + 1 << " ";
    }
  }

  cout << endl;
  return 0;
}