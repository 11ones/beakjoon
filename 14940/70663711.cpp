// 2023년 12월 23일 17:03:19
// 맞았습니다!!
// 5320KB
// 40ms
#include <iostream>
#include <queue>
using namespace std;

int arr[600][600];
bool visit[600][600];
int ans[600][600];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m, x, y, r;
  int dx[4] = {1, 0, -1, 0};
  int dy[4] = {0, -1, 0, 1};
  queue<int> q;

  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
      if (arr[i][j] == 2) {
        q.push(j);
        q.push(i);
        q.push(0);
      }
    }
  }
  while (!q.empty()) {
    x = q.front();
    q.pop();
    y = q.front();
    q.pop();
    r = q.front();
    q.pop();
    for (int i = 0; i < 4; i++) {
      int tx = x + dx[i], ty = y + dy[i];
      if (tx < 0 || tx >= m || ty < 0 || ty >= n || visit[ty][tx] == 1) {
        continue;
      }
      if (arr[ty][tx] == 0) {
        visit[ty][tx] = 1;
        continue;
      }
      visit[ty][tx] = 1;
      ans[ty][tx] = r + 1;
      q.push(tx);
      q.push(ty);
      q.push(r + 1);
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr[i][j] == 2)
        cout << "0 ";
      else if (arr[i][j] != 0 && visit[i][j] == 0)
        cout << "-1 ";
      else
        cout << ans[i][j] << " ";
    }
    cout << '\n';
  }
}