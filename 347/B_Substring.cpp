#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  set<string> st;
  for (int i = 0; i < S.size(); i++) {
    for (int j = 1; i + j <= S.size(); j++) {
      st.insert(S.substr(i, j));
    }
  }

  cout << st.size() << endl;
  return 0;
}