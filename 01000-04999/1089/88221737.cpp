// 2025년 1월 5일 20:22:37
// 맞았습니다!!
// 2212KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> v = {{7}, {0, 1, 3, 6, 7, 9, 12, 13}, {3, 11}, {3, 9}, {1, 9, 12, 13}, {5, 9}, {5}, {3, 6, 7, 9, 12, 13}, {}, {9}};
  array<string, 5> a;
  vector<array<int, 2>> l(n, array<int, 2>());
  for (auto &e : a) {
    cin >> e;
  }
  for (int i = 0; i < n; i++) {
    if (a[1][i * 4 + 1] == '#' || a[3][i * 4 + 1] == '#') {
      cout << -1;
      return 0;
    }
    for (int j = 0; j < 10; j++) {
      for (auto e : v[j]) {
        if (a[e / 3][i * 4 + e % 3] == '#') {
          goto E;
        }
      }
      l[i][0] += j;
      l[i][1]++;
    E:;
    }
  }
  double x = 0, t = 1;
  for(int i = 0; i < n; i++) {
    t *= l[i][1];
  }
  for(int i = 0; i < n; i++) {
    x += t / l[i][1] * l[i][0] * pow(10, n - i - 1);
  }
  cout << setprecision(6) << fixed << x / t;
}