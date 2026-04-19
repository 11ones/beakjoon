// 2024년 12월 20일 23:56:16
// 메모리 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, c = 0;
  cin >> n;
  array<vector<int>, 4> v;
  for (auto &e : v) {
    e = vector<int>(n);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> v[j][i];
    }
  }
  for (auto &e : v) {
    sort(e.begin(), e.end());
  }
  array<map<int, int>, 2> m;
  for (int i = 0; i < 4; i += 2) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        m[i / 2][v[i][j] + v[i + 1][k]]++;
      }
    }
    vector<int>().swap(v[i]);
    vector<int>().swap(v[i + 1]);
  }
  auto a = m[0].begin(), b = m[1].end();
  while (a != m[0].end() && b != m[1].begin()) {
    b--;
    if ((*a).first + (*b).first == 0) {
      c += (*a).second * (*b).second;
    }
    if ((*a).first + (*b).first < 0) {
      a++;
      b++;
    }
  }
  cout << c;
}