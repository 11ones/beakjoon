// 2024년 9월 21일 13:24:21
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int n;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
array<array<int, 500>, 500> a, v{};

int run(int y, int x) {
  int mx = max(1, v[y][x]);
  for (int k = 0; k < 4; k++) {
    int tx = x + dx[k];
    int ty = y + dy[k];
    if (tx >= n || tx < 0 || ty >= n || ty < 0 || a[y][x] >= a[ty][tx]) continue;
    if (!v[ty][tx]) {
      mx = max(mx, run(ty, tx) + 1);
    } else {
      mx = max(mx, v[ty][tx] + 1);
    }
    run(ty, tx);
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

  int mx = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (!v[i][j]) {
        mx = max(mx, run(i, j));
      }
    }
  }
  cout << mx;
}