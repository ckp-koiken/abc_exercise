#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int A;
  vector<int> week(N);
  for (int i = 0; i < 7 * N; i++) {
    cin >> A;
    int day = i / 7;
    week[day] += A;
  }

  for (int w : week) {
    cout << w << " ";
  }

  cout << endl;

  return 0;
}
