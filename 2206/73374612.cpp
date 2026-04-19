// 2024년 2월 13일 23:20:18
// 시간 초과
// KB
// ms
#include <iostream>
#include <vector>
#define MAX 1'000'000'000
using namespace std;

int n, m;
int arr[1000][1000];
int dst[1000][1000];
int vst[1000][1000];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int mn = MAX;

void find2(int x, int y);

void find(int x, int y) {
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
        find2(tx, ty);
        if (mn > dst[n - 1][m - 1]) {
          mn = dst[n - 1][m - 1];
        }
      }
    } else {
      if (dst[ty][tx] > dst[y][x] + 1 || vst[ty][tx] == 2) {
        dst[ty][tx] = dst[y][x] + 1;
        vst[ty][tx] = vst[y][x];
        find(tx, ty);
        if (mn > dst[n - 1][m - 1]) {
          mn = dst[n - 1][m - 1];
        }
      }
    }
  }
}

void find2(int x, int y) {
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
        find2(tx, ty);
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
  find(0, 0);
  if (dst[n - 1][m - 1] == MAX) {
    cout << "-1";
  } else {
    cout << dst[n - 1][m - 1];
  }
}