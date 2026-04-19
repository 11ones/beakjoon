// 2024년 3월 20일 23:53:37
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
#include <queue>
using namespace std;
typedef pair<int, int> pi;

enum D { U, R, D, L };
enum S { E, A, T };
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

int main() {
  int n, k;
  cin >> n >> k;
  int **b = new int *[n];
  for (int i = 0; i < n; i++) {
    b[i] = new int[n]{};
  }
  for (int i = 0; i < k; i++) {
    int x, y;
    cin >> x >> y;
    b[x - 1][y - 1] = A;
  }
  int l;
  cin >> l;
  pi p = {0, 0};
  int d = R, t = 0;
  deque<pi> dp{p};
  b[0][0] = T;
  queue<pair<int, char>> q;
  for (int i = 0; i < l; i++) {
    int t;
    char c;
    cin >> t >> c;
    q.push({t, c});
  }
  while (1) {
    if (q.front().first == t) {
      if (q.front().second == 'D') {
        d = (d + 1) % 4;
      } else {
        d = (d + 3) % 4;
      }
      q.pop();
    }
    t++;
    int tx = p.second + dx[d];
    int ty = p.first + dy[d];
    if (tx < 0 || tx >= n || ty < 0 || ty >= n || b[ty][tx] == T) {
      break;
    }
    dp.push_back({ty, tx});
    p = {ty, tx};
    if (b[ty][tx] == A) {
      b[ty][tx] = T;
      continue;
    }
    b[ty][tx] = T;
    b[dp.front().first][dp.front().second] = E;
    dp.pop_front();
  }
  cout << t;
}