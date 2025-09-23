#include <bits/stdc++.h>
using namespace std;

int main() {
  int M;
  cin >> M;
  vector<int> D(M);
  for (int &d : D) cin >> d;

  int total = 0;
  for (int i = 0; i < M; i++) {
    total += D.at(i);
  }
  int half = (total + 1) / 2;

  int month;
  int day;
  for (int i = 0; i < M; i++) {
    if (half <= D.at(i)) {
      month = i + 1;
      day = half;
      cout << month << " " << day << endl;
      return 0;
    }
    half -= D.at(i);
  }

  return 0;
}