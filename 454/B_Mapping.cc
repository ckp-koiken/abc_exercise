#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  set<int> se;
  for (int i = 0; i < N; i++) {
    int f;
    cin >> f;
    se.insert(f);
  }


  if ((int)se.size() == N) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  if ((int)se.size() == M) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}