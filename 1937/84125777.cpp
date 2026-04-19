// 2024년 9월 21일 12:45:19
// 시간 초과
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int n;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
array<array<int, 500>, 500> a, v{};
vector<pair<int, pair<int, int>>> t;

void run(int y, int x) {
  for (int k = 0; k < 4; k++) {
    int tx = x + dx[k];
    int ty = y + dy[k];
    if (tx >= n || tx < 0 || ty >= n || ty < 0 || v[ty][tx] > v[y][x] || a[y][x] >= a[ty][tx]) continue;
    v[ty][tx] = v[y][x] + 1;
    run(ty, tx);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
      t.push_back({a[i][j], {i, j}});
    }
  }
  sort(t.begin(), t.end());

  for (auto e : t) {
    int esf = e.second.first;
    int ess = e.second.second;
    if (!v[esf][ess]) {
      v[esf][ess] = 1;
      run(esf, ess);
    }
  }

  int mx = 1;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      mx = max(mx, v[i][j]);
    }
  }
  cout << mx;
}