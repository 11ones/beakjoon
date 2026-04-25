// 2024년 9월 20일 23:36:07
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int n;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
array<array<int, 500>, 500> a, v{};

int run(int y, int x, int d, bool p) {
  int mx = 0;
  for (int i = 0; i < 4; i++) {
    int tx = x + dx[i];
    int ty = y + dy[i];
    if (tx >= n || tx < 0 || ty >= n || ty < 0 || v[ty][tx]) {
      continue;
    }
    v[ty][tx] = 1;
    if (p && a[y][x] > a[ty][tx]) {
      mx = max(mx, 1 + run(ty, tx, d + 1, p));
    }
    if (!p && a[y][x] < a[ty][tx]) {
      mx = max(mx, 1 + run(ty, tx, d + 1, p));
    }
  }
  return mx;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }
  int mx = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      fill(&v[0][0], &v[n - 1][n], 0);
      v[i][j] = 1;
      mx = max(mx, 1 + run(i, j, 0, 0) + run(i, j, 0, 1));
    }
  }
  cout << mx;
}