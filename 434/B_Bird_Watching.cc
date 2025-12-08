#include <bits/stdc++.h>
using namespace std;

// MEMO:
// mapを使って解いたが
// 鳥の大きさの合計を種類ごとに管理する配列と
// 種類ごとに鳥の数を管理する配列を用意しても良い（種類を添え字として扱う）

int main() {
  int N, M;
  cin >> N >> M;
  map<int, vector<int>> ma;
  for (int i = 0; i < N; i++) {
    int A, B;
    cin >> A >> B;
    ma[A].push_back(B);
  }

  for (auto m : ma) {
    double size = (double)m.second.size();

    int sum = 0;
    for (int mm : m.second) sum += mm;

    double ans = sum / size;
    
    printf("%.10lf\n", ans);

    // 小数の桁数を指定するときは以下のようにしてもOK
    // cout << fixed << setprecision(10) << ans << endl;
  }

  return 0;
}