#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  vector<int> C(N);
  for (int i = 0; i < N; i++) {
    cin >> S.at(i) >> C.at(i);
  }

  // レートの合計を算出
  int total = 0;
  for (int c : C) {
    total += c;
  }
  // modを計算
  int mod = total % N;

  // Sを辞書順に並び替える
  for (int i = 0; i < N - 1; i++) {
    for (int j = 0; j < N - 1; j++) {
      if (S.at(j) > S.at(j + 1)) {
        swap(S.at(j), S.at(j + 1));
      }
    }
  }
  // another answer
  // sort()でも辞書順に並び替えてくれる
  // sort(S.begin(), S.end());

  cout << S.at(mod) << endl;

  return 0;
}