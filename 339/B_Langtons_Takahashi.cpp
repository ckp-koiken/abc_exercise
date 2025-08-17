#include <bits/stdc++.h>
using namespace std;

const int di[] = {-1, 0, 1, 0};
const int dj[] = {0, 1, 0, -1};

int main() {
  int H, W, N;
  cin >> H >> W >> N;
  vector<string> S(H, string(W, '.'));

  int i = 0, j = 0, v = 0;
  for (int ti = 0; ti < N; ti++) {
    if (S.at(i).at(j) == '.') {
      S.at(i).at(j) = '#';
      v += 1;
    } else {
      S.at(i).at(j) = '.';
      v += 3;
    }
    v %= 4;
    i += di[v];
    j += dj[v];

    i = (i + H) % H;
    j = (j + W) % W;
  }

  for (int i = 0; i < H; i++) {
    cout << S.at(i) << endl;
  }
  return 0;
}