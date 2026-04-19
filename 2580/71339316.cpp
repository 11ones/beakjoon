// 2024년 1월 8일 00:03:07
// 시간 초과
// KB
// ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

typedef struct {
  int x;
  int y;
  int way;
  int zero;
} xyw;

enum { ROW, COL, SQU };

bool cmp(xyw a, xyw b) { return a.zero > b.zero; }

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int arr[9][9];
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cin >> arr[i][j];
    }
  }

  vector<xyw> v;
  for (int i = 0; i < 9; i++) {
    v.push_back({0, i, ROW});
    v.push_back({i, 0, COL});
  }
  for (int i = 0; i < 9; i += 3) {
    for (int j = 0; j < 9; j += 3) {
      v.push_back({i, j, SQU});
    }
  }
  while (!v.empty()) {
    sort(v.begin(), v.end(), cmp);
    xyw tmp = v.back();
    v.pop_back();
    int sum = 0;
    int zcount = 0;
    pair<int, int> szp;
    switch (tmp.way) {
    case ROW:
      for (int i = 0; i < 9; i++) {
        if (arr[tmp.y][i] == 0) {
          zcount++;
          szp = {tmp.y, i};
        } else {
          sum += arr[tmp.y][i];
        }
      }
      break;
    case COL:
      for (int i = 0; i < 9; i++) {
        if (arr[i][tmp.x] == 0) {
          zcount++;
          szp = {i, tmp.x};
        } else {
          sum += arr[i][tmp.x];
        }
      }
      break;
    case SQU:
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
    }
    if (zcount > 1) {
      tmp.zero = zcount;
      v.push_back(tmp);
    } else if (zcount == 1) {
      arr[szp.first][szp.second] = 45 - sum;
      for (int i = 0; i < v.size(); i++) {
        if ((v[i].way == ROW && v[i].x == szp.second) ||
            (v[i].way == COL && v[i].y == szp.first) ||
            (v[i].way == SQU && v[i].x / 3 == szp.second &&
             v[i].y / 3 == szp.first)) {
          v[i].zero++;
        }
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