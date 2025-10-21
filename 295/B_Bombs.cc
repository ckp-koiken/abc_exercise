#include <bits/stdc++.h>
using namespace std;

int main() {
  int R, C;
  cin >> R >> C;
  vector<string> B(R);
  for (int i = 0; i < R; i++) {
    cin >> B[i];
  }

  vector<vector<bool>> blasted(R, vector<bool>(C));
  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      if (!isdigit(B[i][j])) continue;
      int power = B[i][j] - '0';

      for (int ni = 0; ni < R; ni++) {
        for (int nj = 0; nj < C; nj++) {
          if (abs(i - ni) + abs(j - nj) <= power) {
            blasted[ni][nj] = true;
          }
        }
      }
    }
  }

  for (int i = 0; i < R; i++) {
    for (int j = 0; j < C; j++) {
      if (blasted[i][j]) B[i][j] = '.';
    }
  }

  for (string s : B) cout << s << endl;

  return 0;
}