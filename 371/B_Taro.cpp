#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, A;
  cin >> N >> M;
  char B;

  map<int, int> data;
  for (int i = 0; i < M; i++) {
    cin >> A >> B;
    if (B == 'M' && !data.count(A)) {
      data[A] = 1;
      cout << "Yes" << endl;
    } else if (B == 'M' && data.count(A)) {
      data.at(A)++;
      cout << "No" << endl;
    } else if (B == 'F') {
      cout << "No" << endl;
    }
  }
  return 0;
}