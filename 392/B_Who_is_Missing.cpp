#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M);
  for (int i = 0; i < M; i++) {
    cin >> A.at(i);
  }

  set<int> st;
  for (int x : A) {
    if (!st.count(x)) {
      st.insert(x);
    }
  }

  set<int> nost;
  for (int i = 1; i <= N; i++) {
    if (!st.count(i)) { 
      nost.insert(i);
    }
  }
  cout << nost.size() << endl;
  for (auto x : nost) {
    cout << x << " ";
  }

  cout << endl;

  return 0;
}

// another answer
  // 1からNまで順に見て、配列Aの数に該当するかどうかを判断
  // 該当しなければ配列ansに追加
  // int N, M;
  // cin >> N >> M;
  // vector<int> A(M);
  // for (int i = 0; i < M; i++) {
  //   cin >> A.at(i);
  // }

  // vector<int> ans;
  // for (int i = 1; i <= N; i++) {
  //   bool exist = false;
  //   for (int na : A) {
  //     if (na == i) {
  //       exist = true;
  //     }
  //   }
  //   if (!exist) ans.push_back(i);
  // }

  // cout << ans.size() << endl;
  // for (int x : ans) cout << x << ' ';
  // cout << endl;
