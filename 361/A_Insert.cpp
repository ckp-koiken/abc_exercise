#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K, X;
  cin >> N >> K >> X;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  for (int i = 0; i < K; i++) {
    cout << A.at(i) << " ";
  }
  cout << X << " ";

  for (int i = K; i < N; i++) {
    cout << A.at(i) << " ";
  }

  cout << endl;
  return 0;
}

// another answer
// 実際に配列のK番目の次にXを挿入する
// insert()を使う
// int main (){
//   int N, K, X;
//   cin >> N >> K >> X;
//   vector<int> A(N);
//   for (int i = 0; i < N; i++) {
//     cin >> A.at(i);
//   }

//   A.insert(A.begin() + K, X);

//   for (int a : A) {
//     cout << a << " ";
//   }
//   cout << endl;

//   return 0;
// }