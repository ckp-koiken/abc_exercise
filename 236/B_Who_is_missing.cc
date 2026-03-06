#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  map<int, int> ma;
  for (int i = 0; i < (4 * N - 1); i++) {
    int a;
    cin >> a;
    ma[a]++;
  }

  for (auto m : ma) {
    if (m.second != 4) {
      cout << m.first << endl;
    }
  }

  // another answer
  // mapを使わずにvectorで数えても良い
  // vector<int> count(N + 1);
  // for (int i = 0; i < 4 * N - 1; i++) {
  //   int a;
  //   cin >> a;
  //   count[a]++;
  // }

  // for (int i = 1; i <= N; i++) {
  //   if (count[i] == 3) {
  //     cout << i << endl;
  //   }
  // }
  return 0;
}