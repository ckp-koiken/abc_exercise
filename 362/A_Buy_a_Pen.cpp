#include <bits/stdc++.h>
using namespace std;

int main() {
  int R, G, B;
  cin >> R >> G >> B;
  string C;
  cin >> C;

  if (C == "Red") {
    cout << min(G, B) << endl;
  }

  if (C == "Green") {
    cout << min(R, B) << endl;
  }

  if (C == "Blue") {
    cout << min(R, G) << endl;
  }
  return 0;
}