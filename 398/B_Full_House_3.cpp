#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 7;
  vector<int> cards(n);
  for (int i = 0; i < n; i++) {
    cin >> cards.at(i);
  }
  // next_permutation
  // 順列を全部試す
  sort(cards.begin(), cards.end());
  do {
    // 最初の2枚と次の3枚が同じカードであれば良い
    // 2枚目と3枚目は異なるカードである必要がある
    if (cards.at(0) != cards.at(1)) continue;
    if (cards.at(1) == cards.at(2)) continue;
    if (cards.at(2) != cards.at(3)) continue;
    if (cards.at(3) != cards.at(4)) continue;
    cout << "Yes" << endl;
    return 0;
  } while (next_permutation(cards.begin(), cards.end()));
  cout << "No" << endl;
  return 0;
}