#include <bits/stdc++.h>
using namespace std;

int main() {
  int R;
  cin >> R;

  if (R >= 1 && R <= 99) {
    cout << 100 - R << endl;
  }

  if (R >= 100 && R <= 199) {
    cout << 200 - R << endl;
  }

  if (R >= 200 && R <= 299) {
    cout << 300 - R << endl;
  }

  // another answer
  // ^が100の倍数ごとに増えることを利用する
  // cout << 100 - (100 % R) << endl;

  return 0;
}