#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data(13);
  for (int i = 0; i < 5; i++) {
    int tmp;
    cin >> tmp;
    data[tmp - 1]++;
  }

  for (int d : data) {
    if (d != 0) {
      if (d != 2 && d != 3) {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  cout << "Yes" << endl;
  return 0;
}

// another answer
// 整数5個を配列にしてソートし3回、2回出現しているかを確かめれば良い
// int main() {
//   vector<int> a(5);
//   for (int i = 0; i < 5; i++) {
//     cin >> a[i];
//   }

//   // 昇順にソート
//   sort(a.begin(), a.end());

//   // 最初3つとその次の2つの組み合わせか、最初2つとその次の3つの組み合わせかを確認
//   if ((a[0] == a[2] && a[3] == a[4]) || (a[0] == a[1] && a[2] == a[4])) {
//     cout << "Yes" << endl;
//   } else {
//     cout << "No" << endl;
//   }
//     return 0;
// }