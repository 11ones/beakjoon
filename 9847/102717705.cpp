// 2026년 2월 7일 18:45:53
// 맞았습니다!!
// 11376KB
// 96ms
#include <bits/stdc++.h>
using namespace std;
int main() {
  cin.tie(0)->sync_with_stdio(0);
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  vector<int> A(a), B(b), C(c), D(d);
  vector<tuple<int, int, int>> X, Y;
  for (auto &e : A) cin >> e;
  for (auto &e : B) cin >> e;
  for (auto &e : C) cin >> e;
  for (auto &e : D) cin >> e;
  for (int i = 0; i < a; ++i) {
    for (int j = 0; j < b; ++j) {
      X.push_back({A[i] + B[j], i, j});
    }
  }
  for (int i = 0; i < c; ++i) {
    for (int j = 0; j < d; ++j) {
      Y.push_back({C[i] + D[j], i, j});
    }
  }
  sort(X.begin(), X.end());
  sort(Y.begin(), Y.end());
  auto s = X.begin(), e = Y.end();
  while (s != X.end() && e != Y.begin()) {
    int x = get<0>(*s), y = get<0>(*--e);
    if (x + y > 0) {
      --e;
    } else if (x + y < 0) {
      ++s;
    } else {
      cout << A[get<1>(*s)] << " " << B[get<2>(*s)] << " " << C[get<1>(*e)]
           << " " << D[get<2>(*e)];
      return 0;
    }
    ++e;
  }
}