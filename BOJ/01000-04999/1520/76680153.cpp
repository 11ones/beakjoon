// 2024년 4월 9일 23:36:15
// 맞았습니다!!
// 12844KB
// 32ms
#include <iostream>
#include <queue>
#include <tuple>
#include <vector>
using namespace std;
typedef tuple<int, int, int> t;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

struct cmp {
  bool operator()(t a, t b) { return get<0>(a) < get<0>(b); }
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int m, n;
  cin >> m >> n;
  int **arr = new int *[m];
  int ***c = new int **[m];
  for (int i = 0; i < m; i++) {
    arr[i] = new int[n];
    c[i] = new int *[n];
    for (int j = 0; j < n; j++) {
      c[i][j] = new int[5]{};
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }
  c[0][0][4] = 1;
  priority_queue<t, vector<t>, cmp> q;
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
          arr[ty][tx] >= arr[qy][qx] || c[ty][tx][i] == c[qy][qx][4]) {
        continue;
      }
      c[ty][tx][4] += c[qy][qx][4] - c[ty][tx][i];
      c[ty][tx][i] = c[qy][qx][4];
      q.push({arr[ty][tx], ty, tx});
    }
  }
  cout << c[m - 1][n - 1][4];
}