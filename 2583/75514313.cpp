// 2024년 3월 22일 23:52:54
// 맞았습니다!!
// 2156KB
// 0ms
#include <iostream>
#include <queue>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int m, n, k;
  cin >> m >> n >> k;
  bool **arr = new bool *[m];
  for (int i = 0; i < m; i++) {
    arr[i] = new bool[n]{};
  }
  for (int o = 0; o < k; o++) {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    for (int i = y1; i < y2; i++) {
      for (int j = x1; j < x2; j++) {
        arr[i][j] = true;
      }
    }
  }
  priority_queue<int, vector<int>, greater<>> pq;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (arr[i][j] == false) {
        queue<pair<int, int>> q;
        q.push({i, j});
        int c = 1;
        arr[i][j] = true;
        while (!q.empty()) {
          pair<int, int> t = q.front();
          q.pop();
          for (int l = 0; l < 4; l++) {
            int tx = t.second + dx[l];
            int ty = t.first + dy[l];
            if (tx < 0 || ty < 0 || tx >= n || ty >= m || arr[ty][tx] == true) {
              continue;
            }
            arr[ty][tx] = true;
            c++;
            q.push({ty, tx});
          }
        }
        pq.push(c);
      }
    }
  }
  cout << pq.size() << '\n';
  while (!pq.empty()) {
    cout << pq.top() << " ";
    pq.pop();
  }
}