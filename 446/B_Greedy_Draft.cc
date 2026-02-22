#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  
  // 選ばれたジュースを管理するset
  set<int> se;
  
  // another answer
  // 選ばれたジュースを管理するbool型の配列を用意するのでもよい
  // 大きさをM+1として0~M番とする（添え字対策）
  // vector<bool> juice(M + 1);
  
  for (int i = 0; i < N; i++) {
    int L;
    cin >> L;
    
    vector<int> X(L);
    // memo: ここをX[i]としていた凡ミス
    for (int j = 0; j < L; j++) {
      cin >> X[j];
    }
    
    // 選ぶべきジュースがあるか、なくて水（0）になるかを整数で管理
    // 希望リストの先頭からすでに選ばれたものかどうかを試していく
    // 選ばれていない(seにない)のであればkにそれを代入して表示
    // 選ばれつくされていて、水になる場合はそのままk=0を表示
    int k = 0;
    for (int j = 0; j < L; j++) {
      if (!se.count(X[j])) {
        k = X[j];
        break;
      }
      
      // another ans
      // juice配列のX[j]にフラグが立っていなければそれをkに
      // if (!juice[X[j]]) {
      //   k = X[j];
      //   break;
      // }
      
    }
    
    cout << k << endl;
    se.insert(k);
    
    // another ans
    // 選ばれたジュースにフラグを立てる
    // juice[k] = true;
    
  }
  return 0;
}