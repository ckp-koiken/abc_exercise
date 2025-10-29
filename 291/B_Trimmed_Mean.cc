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