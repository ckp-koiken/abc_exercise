#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(5);
  for (int i = 0; i < 5; i++) {
    cin >> a.at(i);
  }

  for (int i = 0; i < 4; i++) {
    vector<int> b(5);
    int check = 0;

    b = a;
    int tmp;
    tmp = b.at(i + 1);
    b.at(i + 1) = b.at(i);
    b.at(i) = tmp;

    for (int j = 0; j < 5; j++) {
      if (b.at(j) == (j + 1)) {
        check++;
      }
    }
    if (check == 5) {
      cout << "Yes" << endl;
      return 0;
    }

  }

  cout << "No" << endl;
  return 0;
}

// another answer
  // 確認用のベクタを最初に作っておいて
  // 直接bと比較してもよい

  // vector<int> ans = {1, 2, 3, 4, 5};

  //   if (b == ans) {
  //     cout << "Yes" << endl;
  //     return 0;
  //   }