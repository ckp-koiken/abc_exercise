#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  for (int i = N; i <= 919; i++) {
    string s = to_string(i);
    int a = s.at(0) - 48;
    int b = s.at(1) - 48;
    int c = s.at(2) - 48;
    if (a * b == c) {
      cout << i << endl;
      return 0;
    }
  }

  return 0;
}

// another answer
// to_stringを使わないで各桁の数を直接計算してもOK

// bool check(int n) {
//   // 100の位の数字は100で割った商
//   int c100 = n / 100;
//   // 10の位の数字は10で割った商を10で割った余り
//   int c10 = n / 10 % 10;
//   // 1の位の数字は10で割った余り
//   int c1 = n % 10;
//   return c100 * c10 == c1;
// }

// int main() {
//   int n;
//   cin >> n;
//   for (int i = n; i <= 919; i++) {
//     if (check(i)) {
//       cout << i << endl;
//       return 0;
//     }
//   }
//   return 0;
// }