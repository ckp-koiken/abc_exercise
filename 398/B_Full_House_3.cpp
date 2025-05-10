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

  // 分布を数える
  // カードの登場頻度を数えて、
  // それぞれ3枚2枚の組になっているかどうかを判断する
  /*
  int m = 13;
  vector<int> cnt(m + 1); // 1から13個確保したいためm+1する
  for (int x : cards) {
    cnt.at(x)++;
  }
  // 逆順にソートrbegin(), rend()
  sort(cnt.rbegin(), cnt.rend());

  if (cnt.at(0) >= 3 && cnt.at(1) >= 2) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  */
  
  return 0;
}