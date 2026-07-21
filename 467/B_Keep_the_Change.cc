#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int X, Y;
  X = 0; Y = 0;

  for (int i = 0; i < N; i++) {
    int A, B;
    string S;
    cin >> A >> B >> S;

    Y += (B - A);

    if (S == "take") X += (B - A);

    // another answer
    // おつりを受け取らなかったとき（keep）のときに損をした分を
    // 合計してもよい
    // int ans = 0;
    // if (S == "keep") ans += (B - A);
  }

  cout << Y - X << endl;
  // cout << ans << endl;
  return 0;
}