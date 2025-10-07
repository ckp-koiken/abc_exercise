#include <bits/stdc++.h>
using namespace std;

int main() {
  map<char, int> ma;
  ma['A'] = 0;
  ma['B'] = 3;
  ma['C'] = 4;
  ma['D'] = 8;
  ma['E'] = 9;
  ma['F'] = 14;
  ma['G'] = 23;

  char p, q;
  cin >> p >> q;

  if (q > p) {
    cout << ma[q] - ma[p] << endl;
  } else {
    cout << ma[p] - ma[q] << endl;
  }

  // another answer
  // 各文字間の距離が小さいので文字列で直接再現
  // 出現位置を検索
  // string p, q;
  // cin >> p >> q;

  // string s = "A..BC...DE....F........G";

  // int p_pos = s.find(p);
  // int q_pos = s.find(q);
  // cout << abs(p_pos - q_pos) << endl;

  return 0;
}
