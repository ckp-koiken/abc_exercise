#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> D(N + 1, -1);
  for (int i = 1; i <= N; i++) cin >> D.at(i);

  int cnt = 0;
  for (int i = 1; i <= N; i++) {
    string month = to_string(i);
    for (int j = 1; j <= D.at(i); j++) {
      string day = to_string(j);
      string mmdd = month + day;
      set<char> st(mmdd.begin(), mmdd.end());
      if (st.size() == 1) cnt++;
    }
  }

  cout << cnt << endl;
  return 0;
}