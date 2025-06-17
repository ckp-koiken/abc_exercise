#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  double X, Y;
  cin >> N;
  X = 0, Y = 0;

  double cost = 0;
  double x, y;
  for (int i = 0; i < N; i++) {
    cin >> x >> y;
    cost += sqrt((x - X) * (x - X) + (y - Y) * (y - Y));
    X = x;
    Y = y;
  }

  cost += sqrt(x * x + y * y);

  // 普通にcoutすると誤差が大きすぎてWAになるので
  // printfで小数点以下10桁まで表示する
  printf("%.10f\n", cost);
  return 0;
}