#include <bits/stdc++.h>
using namespace std;


int main() {
  int N, R;
  cin >> N >> R;
  vector<int> D(N);
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> D.at(i) >> A.at(i);
  }

  for (int i = 0; i < N; i++) {
    if (D.at(i) == 1) {
      if (R >= 1600 && R <= 2799) {
        R += A.at(i);
      }
    }

    if (D.at(i) == 2) {
      if (R >= 1200 && R <= 2399) {
        R += A.at(i);
      }
    }
  }

  cout << R << endl;
  return 0;
}

// another answer
// 配列にしないで読み取りながらレートを判断する
// int main() {
//   int N, R;
//   cin >> N >> R;
//   
//   for (int i = 0; i < N; i++) {
//     int D, A;
//     cin >> D >> A;
// 
//     if (D == 1) {
//       if (R >= 1600 && R <= 2799) {
//         R += A;
//       }
//     }
// 
//     if (D == 2) {
//       if (R >= 1200 && R <= 2399) {
//         R += A;
//       }
//     }
//   }
// 
//   cout << R << endl;
//   return 0;
// }