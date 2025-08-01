#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;

  int j = 0;
  for (int i = 0; i < T.size(); i++) {
    if (S.at(j) == T.at(i)) {
      cout << i + 1 << " ";
      j++;
    }
  }

  cout << endl;

  // set<char> st;
  // for (int i = 0; i < (int)S.size(); i++) {
  //   st.insert(S.at(i));
  // }

  // for (int i = 0; i < (int)T.size(); i++) {
  //   if (st.count(T.at(i))) {
  //     cout << i + 1 << " ";
  //   }
  // }
  // cout << endl;

  return 0;
}