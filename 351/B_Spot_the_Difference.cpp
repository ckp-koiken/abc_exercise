#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> A(N);
  vector<string> B(N);

  for (int i = 0; i < N; i++) {
      cin >> A.at(i);
  }

  for (int i = 0; i < N; i++) {
      cin >> B.at(i);
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (A.at(i).at(j) != B.at(i).at(j)) {
        cout << i + 1 << " " << j + 1 << endl;
        return 0;
      }
    }
  }
  
  return 0;
}