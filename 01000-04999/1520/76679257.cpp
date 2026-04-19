// 2024년 4월 9일 23:23:21
// 시간 초과
// KB
// ms
#include <iostream>
#include <queue>
#include <tuple>
#include <vector>
using namespace std;
typedef tuple<int, int, int> t;
typedef tuple<int, int, int, int, int> tc;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int m, n;
  cin >> m >> n;
  int **arr = new int *[m];
  tc **c = new tc *[m];
  for (int i = 0; i < m; i++) {
    arr[i] = new int[n];
    c[i] = new tc[n]{};
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }
  c[0][0] = {0, 0, 0, 0, 1};
  priority_queue<t, vector<t>, greater<t>> q;
  q.push({0, 0, 0});
  while (!q.empty()) {
    auto tmp = q.top();
    q.pop();
    int qx = get<2>(tmp);
    int qy = get<1>(tmp);
    for (int i = 0; i < 4; i++) {
      int tx = qx + dx[i];
      int ty = qy + dy[i];
      if (tx < 0 || tx >= n || ty < 0 || ty >= m ||
          arr[ty][tx] >= arr[qy][qx]) {
        continue;
      }
      switch (i) {
      case 0:
        get<4>(c[ty][tx]) += get<4>(c[qy][qx]) - get<0>(c[ty][tx]);
        get<0>(c[ty][tx]) = get<4>(c[qy][qx]);
        break;
      case 1:
        get<4>(c[ty][tx]) += get<4>(c[qy][qx]) - get<1>(c[ty][tx]);
        get<1>(c[ty][tx]) = get<4>(c[qy][qx]);
        break;
      case 2:
        get<4>(c[ty][tx]) += get<4>(c[qy][qx]) - get<2>(c[ty][tx]);
        get<2>(c[ty][tx]) = get<4>(c[qy][qx]);
        break;
      case 3:
        get<4>(c[ty][tx]) += get<4>(c[qy][qx]) - get<2>(c[ty][tx]);
        get<3>(c[ty][tx]) = get<4>(c[qy][qx]);
      }
      q.push({get<4>(c[ty][tx]), ty, tx});
    }
  }
  cout << get<4>(c[m - 1][n - 1]);
}