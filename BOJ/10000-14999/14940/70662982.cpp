// 2023년 12월 23일 16:44:12
// 시간 초과
// KB
// ms
#include <iostream>
using namespace std;

int n, m, p = 0;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
int arr[600][600];
bool visit[600][600];
int ans[600][600];

void find(int x, int y, int r) {
  visit[y][x] = 1;
  ans[y][x] = r;
  if (arr[y][x] == 'P') {
    p++;
  }
  for (int i = 0; i < 4; i++) {
    int tx = x + dx[i], ty = y + dy[i];
    if (tx < 0 || tx >= m || ty < 0 || ty >= n) {
      continue;
    }
    if (arr[ty][tx] == 0) {
      visit[ty][tx] = 1;
      continue;
    }
    if (visit[ty][tx] == 0 || ans[ty][tx] > r + 1) {
      find(tx, ty, r + 1);
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int x, y;

  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
      if (arr[i][j] == 2) {
        x = j;
        y = i;
      }
    }
  }
  find(x, y, 0);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i][j] == 2)
        cout << "0 ";
      else if (arr[i][j] != 0 && ans[i][j] == 0)
        cout << "-1 ";
      else
        cout << ans[i][j] << " ";
    }
    cout << '\n';
  }
}