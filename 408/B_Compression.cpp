#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  sort(A.begin(), A.end());
  set<int> st;
  // まとめて以下の書き方でもいい
  // set<int> st(A.begin(), A.end());
  for (int x : A) {
    st.insert(x);
  }

  cout << st.size() << endl;
  for (int s : st) {
    cout << s << " ";
  }

  cout << endl;

  return 0;
}