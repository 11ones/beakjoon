// 2024년 7월 10일 22:54:22
// 맞았습니다!!
// 2416KB
// 8ms
#include <iostream>
#include <queue>
#define MAX 1'000'000
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int dx[4] = {0, 1, 0, -1};
  int dy[4] = {1, 0, -1, 0};
  int c = 1;
  int n;
  while (1) {
    cin >> n;
    if (n == 0) {
      break;
    }
    int **a = new int *[n], **d = new int *[n];
    for (int i = 0; i < n; i++) {
      a[i] = new int[n];
    }
    for (int i = 0; i < n; i++) {
      d[i] = new int[n];
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cin >> a[i][j];
      }
    }
    fill(&d[0][0], &d[n - 1][n], MAX);
    d[0][0] = a[0][0];
    queue<pair<int, int>> q;
    q.push({0, 0});
    while (!q.empty()) {
      int tf = q.front().first;
      int ts = q.front().second;
      q.pop();
      for (int i = 0; i < 4; i++) {
        int tx = ts + dx[i];
        int ty = tf + dy[i];
        if (tx >= n || tx < 0 || ty >= n || ty < 0 ||
            d[ty][tx] <= d[tf][ts] + a[ty][tx]) {
          continue;
        }
        d[ty][tx] = d[tf][ts] + a[ty][tx];
        q.push({ty, tx});
      }
    }
    cout << "Problem " << c << ": " << d[n - 1][n - 1] << '\n';
    c++;
  }
}