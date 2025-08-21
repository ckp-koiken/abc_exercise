#include <bits/stdc++.h>
using namespace std;

// 0, 2, 4, 6, 8を全て2で割って0, 1, 2, 3, 4に置き換える
// 0, 1, 2, 3, 4を並べてできる整数は5進数で上手く扱える
  // 5進数： 0, 1, 2, 3, 4, 10, 11, 12, 13...
  // 10進数：0, 1, 2, 3, 4, 5, 6, 7, 8...
// N番目の整数を5進数とみなして値を計算するとN - 1になる
int main() {
  int64_t N;
  cin >> N;

  // 目的のためNから1減らす
  N--;
  vector<int> a;

  // Nが0になるまで5進数に変換する
  while(N) {
    // 5で割り続けて余りを配列に追加していく
    a.push_back(N % 5);
    N /= 5;
  }

  // Nが1の時はwhileループが起こらずにaが空文字列になってしまう
  // なので配列が空なら0としておく
  if (a.empty()) a.push_back(0);

  // 桁が逆順に記録されるので逆転させる
  reverse(a.begin(), a.end());

  // 各桁を2倍して表示
  for (auto &x : a) cout << x * 2;
  cout << endl;
}

// 文字列にして桁を総当たりで調べるとTLEになる
// int main() {
//   int64_t N;
//   cin >> N;

//   int num = 0;
//   int cnt = 0;

//   for (;;) {
//     string num_s = to_string(num);
//     int m = num_s.size();
//     bool check = true;
//     for (int i = 0; i < m; i++) {
//       if (num_s.at(i) != '0' && num_s.at(i) != '2' && num_s.at(i) != '4' &&
//           num_s.at(i) != '6' && num_s.at(i) != '8') {
//         check = false;
//       }
//     }
    
//     if (check) cnt++;

//     if (cnt == N) {
//       cout << num << endl;
//       return 0;
//     }

//     num++;
//   }
//   return 0;
// }