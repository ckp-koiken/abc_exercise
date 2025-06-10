#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  string n = to_string(N);
  char a = n.at(0), b = n.at(1), c = n.at(2);
  // 1文字ずつ受け取るのでもいい
  // char a, b, c;
  // cin >> a >> b >> c

  cout << b << c << a << " " << c << a << b << endl;
  return 0;
}

// another answer
// Nを整数型として受け取って文字通り100の位、10の位、1の位を計算
// int a = N / 100, b = (N / 10) % 10, c = N % 10;