#include <bits/stdc++.h>
using namespace std;

int main() {
  string S1, S2;
  cin >> S1 >> S2;

  if ((S1[0] == '#' && S2[1] == '#') && (S1[1] == '.' && S2[0] == '.')) {
    cout << "No" << endl;
  } else if ((S1[1] == '#' && S2[0] == '#') && (S1[0] == '.' && S2[1] == '.')) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }

  // another answer
  // 文字列なので".#"、"#."と"#."、".#"を直接探してNoにしてもよい
  // if (S1 == "#." && S2 == ".#") {
  //   cout << "No" << endl;
  // } else if (S1 == ".#" && S2 == "#.") {
  //   cout << "No" << endl;
  // } else {
  //   cout << "Yes" << endl;
  // }

  return 0;
}