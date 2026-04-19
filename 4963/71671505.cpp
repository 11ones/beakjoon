// 2024년 1월 13일 18:11:17
// 맞았습니다!!
// 2152KB
// 0ms
#include <iostream>
#include <queue>
using namespace std;

int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  while (1) {
    int w, h, ans = 0;
    cin >> w >> h;
    if (w == 0 && h == 0) {
      break;
    }
    int **m = new int *[h];
    for (int i = 0; i < h; i++) {
      m[i] = new int[w];
    }

    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        cin >> m[i][j];
      }
    }

    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        if (m[i][j] == 1) {
          ans++;
          m[i][j] = 0;
          queue<pair<int, int>> q;
          q.push({i, j});
          while (!q.empty()) {
            pair<int, int> t = q.front();
            q.pop();
            for (int k = 0; k < 8; k++) {
              int ty = t.first + dy[k];
              int tx = t.second + dx[k];
              if (tx < 0 || tx >= w || ty < 0 || ty >= h || m[ty][tx] != 1) {
                continue;
              }
              q.push({ty, tx});
              m[ty][tx] = 0;
            }
          }
        }
      }
    }
    cout << ans << '\n';
    for (int i = 0; i < h; i++) {
      delete[] m[i];
    }
    delete[] m;
  }
}
