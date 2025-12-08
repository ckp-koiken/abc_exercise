#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  map<int, vector<int>> ma;
  for (int i = 0; i < N; i++) {
    int A, B;
    cin >> A >> B;
    ma[A].push_back(B);
  }

  for (auto m : ma) {
    double size = (double)m.second.size();

    int sum = 0;
    for (int mm : m.second) sum += mm;

    double ans = sum / size;
    
    printf("%.10lf\n", ans);
  }

  return 0;
}