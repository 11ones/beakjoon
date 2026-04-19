// 2024년 3월 12일 23:15:26
// 맞았습니다!!
// 2152KB
// 0ms
#include <iostream>
using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m, r, c, d;
  cin >> n >> m >> r >> c >> d;
  int **room = new int *[n];
  for (int i = 0; i < n; i++) {
    room[i] = new int[m]{};
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> room[i][j];
    }
  }
  int ans = 0;
  while (1) {
    if (room[r][c] == 0) {
      room[r][c] = 2;
      ans++;
    }
    bool check = 1;
    for (int i = 0; i < 4; i++) {
      int tx = c + dx[i];
      int ty = r + dy[i];
      if (tx < 0 || ty < 0 || tx >= m || ty >= n || room[ty][tx] != 0) {
        continue;
      }
      check = 0;
      break;
    }
    if (check) {
      if (room[r + dy[(d + 2) % 4]][c + dx[(d + 2) % 4]] != 1) {
        r += dy[(d + 2) % 4];
        c += dx[(d + 2) % 4];
        continue;
      }
      break;
    } else {
      for (int i = 1; i <= 4; i++) {
        int ty = r + dy[(4 + d - i) % 4];
        int tx = c + dx[(4 + d - i) % 4];
        if (ty < 0 || tx < 0 || ty >= n || tx >= m) {
          continue;
        }
        if (room[ty][tx] == 0) {
          r = ty;
          c = tx;
          d = (4 + d - i) % 4;
          break;
        }
      }
    }
  }
  cout << ans;
}