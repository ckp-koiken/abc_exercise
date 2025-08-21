#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t N;
  cin >> N;

  N--;
  vector<int> a;
  while(N) {
    a.push_back(N % 5);
    N /= 5;
  }
  if (a.empty()) a.push_back(0);
  reverse(a.begin(), a.end());

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