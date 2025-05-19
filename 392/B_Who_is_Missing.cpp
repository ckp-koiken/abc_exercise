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