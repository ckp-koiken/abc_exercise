#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X, Y;
  cin >> N;

  int score_x = 0;
  int score_y = 0;
  for (int i = 0; i < N; i++) {
    cin >> X >> Y;
    score_x += X;
    score_y += Y;
  }

  if (score_x == score_y) {
    cout << "Draw" << endl;
  } else if (score_x > score_y) {
    cout << "Takahashi" << endl;
  } else {
    cout << "Aoki" << endl;
  }
  return 0;
}