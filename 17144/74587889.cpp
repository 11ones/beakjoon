// 2024년 3월 7일 23:14:54
// 맞았습니다!!
// 12584KB
// 52ms
#include <iostream>
#include <vector>
using namespace std;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
  // ios_base::sync_with_stdio(false);
  // cin.tie(NULL);

  vector<int> v;
  int r, c, t;
  cin >> r >> c >> t;
  int **room = new int *[r];
  for (int i = 0; i < r; i++) {
    room[i] = new int[c];
  }

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> room[i][j];
      if (room[i][j] == -1) {
        v.push_back(i);
      }
    }
  }

  for (int o = 0; o < t; o++) {
    // 1
    int **rt = new int *[r];
    for (int i = 0; i < r; i++) {
      rt[i] = new int[c]{};
    }
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        if (room[i][j] == -1) {
          continue;
        }
        int cway = 0;
        for (int k = 0; k < 4; k++) {
          int tx = j + dx[k];
          int ty = i + dy[k];
          if (tx < 0 || tx >= c || ty < 0 || ty >= r || room[ty][tx] == -1) {
            continue;
          }
          rt[ty][tx] += room[i][j] / 5;
          cway++;
        }
        rt[i][j] += room[i][j] - room[i][j] / 5 * cway;
      }
    }
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        if (room[i][j] != -1) {
          room[i][j] = rt[i][j];
        }
      }
    }
    // 2
    for (int i = v[0] - 1; i > 0; i--) {
      room[i][0] = room[i - 1][0];
    }
    for (int i = 1; i < c; i++) {
      room[0][i - 1] = room[0][i];
    }
    for (int i = 1; i <= v[0]; i++) {
      room[i - 1][c - 1] = room[i][c - 1];
    }
    for (int i = c - 1; i > 1; i--) {
      room[v[0]][i] = room[v[0]][i - 1];
    }
    for (int i = v[1] + 1; i < r - 1; i++) {
      room[i][0] = room[i + 1][0];
    }
    for (int i = 1; i < c; i++) {
      room[r - 1][i - 1] = room[r - 1][i];
    }
    for (int i = r - 1; i > v[1]; i--) {
      room[i][c - 1] = room[i - 1][c - 1];
    }
    for (int i = c - 1; i > 1; i--) {
      room[v[1]][i] = room[v[1]][i - 1];
    }
    room[v[0]][1] = 0;
    room[v[1]][1] = 0;
  }
  int ans = 2;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      ans += room[i][j];
    }
  }
  cout << ans;
}