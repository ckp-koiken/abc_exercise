#include <bits/stdc++.h>
using namespace std;

int main() { 
  int N, A;
  string S;
  cin >> N;

  int left_pos = 0;
  int right_pos = 0;
  int left_h = 0;
  int right_h = 0;
  for (int i = 0; i < N; i++) {
    cin >> A >> S;
    if (S == "L") {
      if (left_pos == 0) {
        left_pos = A;
        continue;
      }
      left_h += abs(A - left_pos);
      left_pos = A;
    } 

    if (S == "R") {
      if (right_pos == 0) {
        right_pos = A;
        continue;
      }
      right_h += abs(A - right_pos);
      right_pos = A;
    }
  }

  cout << left_h + right_h << endl;
  
  return 0;
}