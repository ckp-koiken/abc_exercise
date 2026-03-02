#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  map<char, int> ma;
  for (char c : S) {
    ma[c]++;
  }

  int cnt = 0;
  for (auto m : ma) {
    int tmp = m.second;
    cnt = max(cnt, tmp);
  }

  set<char> se;
  for (auto m : ma) {
    if (m.second == cnt) {
      se.insert(m.first);
    }
  }

  for (char c : S) {
    if (!se.count(c)) cout << c;
  }
  cout << '\n';
  return 0;
}

// another answer
// アルファベット26文字ごとに何回登場したかを数える配列を用意する
// 最大値を*max_element()で取得してそれ以外のアルファベットを表示すれば良い

// int main() {
//   string s;
//   cin >> s;
//   // 26文字それぞれのアルファベットの登場回数を数えるための配列
//   vector<int> cnt(26);

//   // 添え字の指定をc-'a'とすることで
//   // アルファベットを'a'からの距離で管理（0〜25まで）
//   for (char c : s) {
//     cnt[c - 'a']++;
//   }

//   // 最大値を取得
//   int ma = *max_element(cnt.begin(), cnt.end());

//   // 空の文字列tに最大値以外の文字を追加
//   string t = "";
//   for (char c : s) {
//     if (cnt[c - 'a'] != ma) t += c;
//   }

//   cout << t << endl;
// }