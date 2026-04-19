// 2024년 1월 7일 23:39:14
// 시간 초과
// KB
// ms
#include <iostream>
#include <queue>
using namespace std;

typedef struct {
  int x;
  int y;
  int way;
} xyw;

enum { ROW, COL, SQU };

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int arr[9][9];
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cin >> arr[i][j];
    }
  }

  queue<xyw> q;
  for (int i = 0; i < 9; i++) {
    q.push({0, i, ROW});
    q.push({i, 0, COL});
  }
  for (int i = 0; i < 9; i += 3) {
    for (int j = 0; j < 9; j += 3) {
      q.push({i, j, SQU});
    }
  }
  while (!q.empty()) {
    xyw tmp = q.front();
    q.pop();
    int sum = 0;
    int zcount = 0;
    int zp;
    switch (tmp.way) {
    case ROW:
      for (int i = 0; i < 9; i++) {
        if (arr[tmp.y][i] == 0) {
          zcount++;
          zp = i;
        } else {
          sum += arr[tmp.y][i];
        }
      }
      if (zcount > 1) {
        q.push(tmp);
      } else if (zcount == 1) {
        arr[tmp.y][zp] = 45 - sum;
      }
      break;
    case COL:
      for (int i = 0; i < 9; i++) {
        if (arr[i][tmp.x] == 0) {
          zcount++;
          zp = i;
        } else {
          sum += arr[i][tmp.x];
        }
      }
      if (zcount > 1) {
        q.push(tmp);
      } else if (zcount == 1) {
        arr[zp][tmp.x] = 45 - sum;
      }
      break;
    case SQU:
      pair<int, int> szp;
      for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
          if (arr[tmp.y + i][tmp.x + j] == 0) {
            zcount++;
            szp = {tmp.y + i, tmp.x + j};
          } else {
            sum += arr[tmp.y + i][tmp.x + j];
          }
        }
      }
      if (zcount > 1) {
        q.push(tmp);
      } else if (zcount == 1) {
        arr[szp.first][szp.second] = 45 - sum;
      }
    }
  }
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cout << arr[i][j] << " ";
    }
    cout << '\n';
  }
}