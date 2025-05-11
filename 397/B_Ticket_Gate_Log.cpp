#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  // Sを前から見て行って、今見ている場所までの文字列が条件を満たすような最小の操作回数（文字の挿入回数）を考える

  int ans = 0;  // 操作回数
  char target = 'i';  // 次に現れる必要がある文字

  // Sを前から1文字ずつ見ていく
  for (char c : S) {
    // 今見ている文字がtに一致するならば条件を満たすので、tを反転させてSの次の文字を見る
    if (c == target) {
      // target、iならoに、oならiにして代入
      target = target == 'i' ? 'o' : 'i';
    } else {
      // 今見ている文字がtと異なるならばtを今見ている文字の前に挿入する操作を追加
      ans++;
    }
  }

  // Sの最後の文字がiならばその後ろにoを挿入する必要があるので答えに1を足す
  if (target == 'o') {
    ans++;
  }
  cout << ans << endl;
  return 0;
}