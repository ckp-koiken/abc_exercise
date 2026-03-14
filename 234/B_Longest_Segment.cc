#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  // memo: 2次元のvectorを指定しているがxの配列とyの配列をそれぞれ用意しても良い
  // その場合x[i]-x[j]、y[i]-y[j]で距離を出す
  vector<vector<double>> data(N, vector<double>(2));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < 2; j++) {
      cin >> data[i][j];
    }
  }

  double dist = 0;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (i == j) continue;

      double x_dist = pow(data[i][0] - data[j][0], 2);
      double y_dist = pow(data[i][1] - data[j][1], 2);

      double tmp = x_dist + y_dist;

      dist = max(tmp, dist);
    }
  }

  // memo: fixedを指定すると小数点以下の桁指定になる
  cout << fixed << setprecision(15) << sqrt(dist) << endl;

  return 0;
}