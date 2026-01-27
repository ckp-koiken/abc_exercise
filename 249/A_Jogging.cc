#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, D, E, F, X;
  cin >> A >> B >> C >> D >> E >> F >> X;

  int Taka = 0;
  int Aok = 0;

  for (int i = 0; i < X; i++) {
    if (i % (A + C) < A) {
      Taka += B;
    }

    if (i % (D + F) < D) {
      Aok += E;
    }
  }

  if (Taka > Aok) {
    cout << "Takahashi" << endl;
  } else if (Taka < Aok) {
    cout << "Aoki" << endl;
  } else {
    cout << "Draw" << endl;
  }
  
  return 0;
}