// 2024년 2월 13일 23:44:30
// 틀렸습니다
// KB
// ms
#include <iostream>
#include <queue>
#define MAX 1'000'000'000
using namespace std;

int n, m;
int arr[1000][1000];
int dst[1000][1000];
int vst[1000][1000];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

void find(int x, int y) {
  queue<pair<int, int>> q2;
  q2.push({x, y});
  while (!q2.empty()) {
    int x = q2.front().first;
    int y = q2.front().second;
    q2.pop();
    for (int o = 0; o < 4; o++) {
      int tx = x + dx[o];
      int ty = y + dy[o];
      if (tx < 0 || tx >= m || ty < 0 || ty >= n) {
        continue;
      }
      if (!arr[ty][tx]) {
        if (dst[ty][tx] > dst[y][x] + 1) {
          dst[ty][tx] = dst[y][x] + 1;
          vst[ty][tx] = vst[y][x];
          q2.push({tx, ty});
        }
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> m;
  char c;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> c;
      arr[i][j] = c - '0';
    }
  }
  fill_n(&dst[0][0], 1000 * 1000, MAX);
  dst[0][0] = 1;
  vst[0][0] = 1;
  queue<pair<int, int>> q;
  q.push({0, 0});

  while (!q.empty()) {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();
    for (int o = 0; o < 4; o++) {
      int tx = x + dx[o];
      int ty = y + dy[o];
      if (tx < 0 || tx >= m || ty < 0 || ty >= n) {
        continue;
      }
      if (arr[ty][tx]) {
        if (!arr[y][x] && vst[y][x] != 2) {
          vst[ty][tx] = 2;
          dst[ty][tx] = dst[y][x] + 1;
          find(tx, ty);
        }
      } else {
        if (dst[ty][tx] > dst[y][x] + 1 || vst[ty][tx] == 2) {
          dst[ty][tx] = dst[y][x] + 1;
          vst[ty][tx] = vst[y][x];
          q.push({tx, ty});
        }
      }
    }

  }

  if (dst[n - 1][m - 1] == MAX) {
    cout << "-1";
  } else {
    cout << dst[n - 1][m - 1];
  }
}