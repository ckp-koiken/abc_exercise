#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  for (int num = 0; num < N + 1; num++) {
    set<int> st;
    for (int x : A) {
      st.insert(x);
    }
    if (st.size() != M) {
      cout << num << endl;
      return 0;
    }
    A.pop_back();
  }
  return 0;
}