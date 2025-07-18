#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<char> C(N);
  vector<int64_t> L(N);

  for (int i = 0; i < N; i++) {
    cin >> C.at(i) >> L.at(i);
  }

  int64_t cnt = 0;
  for (int64_t l : L) {
    cnt += l;
    if (cnt > 100) {
      cout << "Too Long" << endl;
      return 0;
    }
  }

  string S = "";
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < L.at(i); j++) {
      S.push_back(C.at(i));
    }
  }

  cout << S << endl;
  
  return 0;
}