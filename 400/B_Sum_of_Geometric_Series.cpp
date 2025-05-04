#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t N;
  int M;
  cin >> N >> M;
  int max = 1e9;

  int64_t X = 1;
  int64_t num = 1;
  for (int i = 1; i <= M; i++) {
    num *= N;
    X += num;
    if (X > max) {
      cout << "inf" << endl;
      return 0;
    }
  }
  
  cout << X << endl;

  return 0;
}