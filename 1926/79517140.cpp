// 2024년 6월 11일 23:34:26
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;

int n, m, mx = 0, tmx = 0, cnt = 0;
int arr[500][500] = {};
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void find(int y, int x) {
  for (int i = 0; i < 4; i++) {
    int tx = x + dx[i];
    int ty = y + dy[i];
    if (tx >= m || tx < 0 || ty >= n || ty < 0 || !arr[ty][tx]) {
      continue;
    }
    arr[ty][tx] = 0;
    tmx++;
    find(ty, tx);
  }
}

int main() {
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i][j] == 1) {
        tmx = 0;
        cnt++;
        find(i, j);
        mx = max(mx, tmx);
      }
    }
  }
  cout << cnt << "\n" << mx;
}