#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<string> S(N);

  for (int i = 0; i < N; i++) {
    cin >> S.at(i);
  }

  // 投票の結果0と1どちらが少数派かを記録
  // 全く投票されない方がある場合、全ての人に1を加点
  vector<int> result(M);
  for (int j = 0; j < M; j++) {
    int x = 0;
    int y = 0;
    for (int i = 0; i < N; i++) {
      if (S.at(i).at(j) == '0') {
        x++;
      } else {
        y++;
      }
    }
    if (x == 0 || y == 0) {
      result.at(j) = -1;
    } else if (x < y) {
      result.at(j) = 0;
    } else {
      result.at(j) = 1;
    }
  }

  // 投票者ごとの得点を計算
  vector<int> player(N);
  for (int j = 0; j < M; j++) {
    for (int i = 0; i < N; i++) {
      if (result.at(j) == 0) {
        if (S.at(i).at(j) == '0') player.at(i)++;
      } else if (result.at(j) == 1) {
        if (S.at(i).at(j) == '1') player.at(i)++;
      } else {
        player.at(i)++;
      }
    }
  }

  // another answer
  // resultを経由しないで最初からplayerに得点を追加していく方法もある
  // vector<int> p_score(N);
  // for (int j = 0; j < M; j++) {
  //   int x = 0;
  //   int y = 0;
  //   for (int i = 0; i < N; i++) {
  //     if (S.at(i).at(j) == '0') {
  //       x++;
  //     } else {
  //       y++;
  //     }
  //   }
  //   for (int i = 0; i < N; i++) {
  //     if (S.at(i).at(j) == '0') {
  //       if (x <= y) {
  //         p_score.at(i)++;
  //       }
  //     } else {
  //       if (x >= y) {
  //         p_score.at(i)++;
  //       }
  //     }
  //   }
  // }

  // 最大得点を抽出
  int high = 0;
  for (int i = 0; i < N; i++) {
    high = max(high, player.at(i));
  }

  // 最大得点を抽出する際にmax_elementを使うと楽
  // イテレータが返ってくるので値を使う場合*を入れる
  // int high = (*max_element(player.begin(), player.end()));

  // 最大得点にあたる人を昇順に表示
  for (int i = 0; i < N; i++) {
    if (player.at(i) == high) {
      cout << i + 1 << " ";
    }
  }

  cout << endl;
  return 0;
}