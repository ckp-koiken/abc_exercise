#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, A;
  cin >> N >> M;
  char B;

  map<int, int> data;
  for (int i = 0; i < M; i++) {
    cin >> A >> B;
    if (B == 'M' && !data.count(A)) {
      data[A] = 1;
      cout << "Yes" << endl;
    } else if (B == 'M' && data.count(A)) {
      data.at(A)++;
      cout << "No" << endl;
    } else if (B == 'F') {
      cout << "No" << endl;
    }
  }
  return 0;
}

// another answer
// int main() {
//   int n, m;
//   cin >> n >> m;
  
//   // 各家庭で長男が生まれたかどうかを管理する配列を用意
//   vector<bool> taro(n + 1);
//   for (int i = 0; i < m; i++) {
//     int a; 
//     char b;
//     cin >> a >> b;
//     if (b == 'M') {
//       // bがMで、配列taroにフラグが立っていればもう生まれているのでNo
//       if (taro.at(a)) {
//         cout << "No" << endl;
//       } else {
//         // フラグが立っていなければフラグを立てたうえでYes
//         taro.at(a) = true;
//         cout << "Yes" << endl;
//       }
//     } else {
//       // 女の子なのでNo
//       cout << "No" << endl;
//     }
//   }
//   return 0;
// }