#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W, X, Y;
  cin >> H >> W >> X >> Y;
  X--;
  Y--;

  vector<string> S(H);
  for (int i = 0; i < H; i++) {
    cin >> S.at(i);
  }
  string T;
  cin >> T;

  int C = 0;
  for (char t : T) {
    if (t == 'U' && S.at(X - 1).at(Y) != '#') X--;
    if (t == 'D' && S.at(X + 1).at(Y) != '#') X++;
    if (t == 'L' && S.at(X).at(Y - 1) != '#') Y--;
    if (t == 'R' && S.at(X).at(Y + 1) != '#') Y++;
    if (S.at(X).at(Y) == '@') {
      S.at(X).at(Y) = '.';
      C++;
    }
  }

  cout << X + 1 << " " << Y + 1 << " " << C << endl;

  return 0;
}