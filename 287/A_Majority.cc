#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int cnt = 0;
  for (int i = 0; i < N; i++) {
    string S;
    cin >> S;
    if (S == "For") cnt++;
  }

  if (cnt > N / 2) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}