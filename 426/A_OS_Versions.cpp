#include <bits/stdc++.h>
using namespace std;

int main() {
  map<string, int> ma;
  ma["Ocelot"] = 1;
  ma["Serval"] = 2;
  ma["Lynx"] = 3;

  string X, Y;
  cin >> X >> Y;
  if (ma[X] >= ma[Y]) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
