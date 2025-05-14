#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> S(N);

  for (int i = 0; i < N; i++) {
    cin >> S.at(i);
  }

  vector<int> size(N);
  for (int i = 0; i < N; i++) {
    size.at(i) = S.at(i).size();
  }

  for (int j = 0; j < N - 1; j++) {
    for (int i = 0; i < N - 1; i++) {
      if (size.at(i) > size.at(i + 1)) {
        string tmp;
        tmp = S.at(i);
        S.at(i) = S.at(i + 1);
        S.at(i + 1) = tmp;

        int tm;
        tm = size.at(i);
        size.at(i) = size.at(i + 1);
        size.at(i + 1) = tm;
      }
    }
  }

  for (string a : S) {
    cout << a;
  }
  cout << endl;


  return 0;
}