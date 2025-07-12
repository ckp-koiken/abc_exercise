#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> food(N);
  for (int i = 0; i < N; i++) {
    cin >> food.at(i);
  }

  string ans = "Yes";
  for (int i = 0; i < N - 2; i++) {
    if (food.at(i) == "sweet" && food.at(i + 1) == "sweet") {
      ans = "No";
    }
  }
  cout << ans << endl;
  return 0;
}