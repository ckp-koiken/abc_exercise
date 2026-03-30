#include <bits/stdc++.h>
using namespace std;

// AとBそれぞれの各桁の数字を足したものが10以上であれば繰り上がる
// 9以下であれば繰り上がりは起こらない
// AとBそれぞれを10で割った余りの和を求めて10以上ならHard、そうでないならEasy
// AとBを10で割り続けて同じことを繰り返し、0になっても繰り上がりがなければEasyで終わる
int main() {
  long long int a, b;
  cin >> a >> b;
  
  while (a > 0 && b > 0) {
    if ((a % 10) + (b % 10) >= 10) {
      cout << "Hard" << endl;
      return 0;
    }
    a /= 10;
    b /= 10;
  }
  
  cout << "Easy" << endl;
  return 0;
}