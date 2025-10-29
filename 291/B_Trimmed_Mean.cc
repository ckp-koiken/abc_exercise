#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int mem = 5 * N;
  vector<int> X(mem);
  for (int i = 0; i < mem; i++) {
    cin >> X[i];
  }

  for (int i = 0; i < N; i++) {
    auto maxIte = max_element(X.begin(), X.end());
    X.erase(maxIte);
  }

  for (int i = 0; i < N; i++) {
    auto minIte = min_element(X.begin(), X.end());
    X.erase(minIte);
  }

  double total = 0.0;
  int size = (int)X.size();

  for (int i = 0; i < size; i++) {
    total += X[i];
  }

  double mean = total / size;

  printf("%.10lf\n", mean);

  return 0;
}

// another answer
// sortして上下N要素を無視する
// int main() {
//   int n;
//   cin >> n;
//   vector<int> x(5 * n);
//   for (int i = 0; i < 5 * n; i++) cin >> x[i];

//   sort(x.begin(), x.end());

//   double total = 0.0;

//   // 上下それぞれn個を無視して合計
//   // nから4nまで
//   for (int i = n; i < 4 * n; i++) total += x[i];

//   // 3n要素で割って平均をとる
//   cout << total / ((double)(3 * n)) << endl;
//   return 0;
// }