#include <bits/stdc++.h>
using namespace std;

// 特定の領域が条件を満たしているかを確認する関数
bool check(vector<string> s) {
  // 左上3*3を見て#ならばfalse
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (s[i][j] != '#') {
        return false;
      }
    }
  }
  // 右下3*3を見て#ならばfalse
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (s[8 - i][8 - j] != '#') {
        return false;
      }
    }
  }
  // 左上3*3と右下3*3の近傍をみて.ならばfalse
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      // 近傍を見たいのでi,jが3未満はスキップ
      if (i < 3 && j < 3) continue;
      
      // 左上の近傍
      if (s[i][j] != '.') {
        return false;
      }

      // 右下の近傍
      if (s[8 - i][8 - j] != '.') {
        return false;
      }
    }
  }

  // 以上全部でfalseじゃなければtrue
  return true;
}

// 愚直に端から端まで条件を満たす領域があるかどうかを調べる
int main() {
  int n, m;
  cin >> n >> m;
  vector<string> s(n);
  for (int i = 0; i < n; i++) cin >> s[i];

  // 特定の9*9の領域があるかを調べるので
  // n-7*m-7領域調べればいい
  for (int si = 0; si < n - 8; si++) {
    for (int sj = 0; sj < m - 8; sj++) {
      // 9*9領域分の文字列配列tを作る
      vector<string> t(9);

      // 9*9領域をtに抽出
      for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
          // si、sjからi、j分伸ばした領域をtに入れる
          t[i] += s[si + i][sj + j];
        }
      }

      // チェック用の関数を通して
      // 条件を満たすならばsi+1、sj+1を表示（添え字調整
      if (check(t)) {
        cout << si + 1 << " " << sj + 1 << endl;
      }
    }
  }
  return 0;
}