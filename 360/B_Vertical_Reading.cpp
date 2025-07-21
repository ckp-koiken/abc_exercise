#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;

  // ありうるすべてのc, wをシミュレーションし、
  // 条件を満たすようなc, wが存在するか判定すればいい
  for (int w = 1; w < S.size(); w++) {
    // w: 区切り文字数によるループ
    for (int c = 0; c < w; c++) {
      // c: 文字列のc文字番目を連結
      // 「0以上の文字列の0文字目を連結」とかでもいい。
      // これを見落としていた。
      
      string check = "";
      for (int i = c; i < S.size(); i += w) {
        // cの条件ごとに文字列を連結
        check.push_back(S.at(i));
      }

      // 条件と合っているか判定
      if (check == T) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
  return 0;
}