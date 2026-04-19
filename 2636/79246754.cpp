// 2024년 6월 4일 23:13:30
// 맞았습니다!!
// 2080KB
// 0ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;

int dx[4] = {1, 0, -1, 0}; // 4방향 탐색용
int dy[4] = {0, 1, 0, -1};
int n, m, tme = 1, cnt = 0; // 세로, 가로, 시간, 치즈 칸 수

void fill(vvi &v, vvi &out, int y, int x) { // 공기를 채워주는 함수
  for(int i = 0; i < 4; i++) {
    int tx = x + dx[i];
    int ty = y + dy[i];
    if(tx < 0 || tx >= m || ty < 0 || ty >= n || out[ty][tx] || v[ty][tx]) {
      continue;
    }
    out[ty][tx] = 1;
    fill(v, out, ty, tx);
  }
}

int main() {
  cin >> n >> m;
  vvi v; // 판
  for (int i = 0; i < n; i++) {
    vi iv(m);
    v.push_back(iv);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> v[i][j];
      if (v[i][j])
        cnt++;
    }
  }
  if(cnt == 0) { // 판에 아무것도 없으면 0초에 0개
    cout << "0\n0";
    return 0;
  }
  while (1) {
    vvi tv, out; // 임시 판, 공기
    for (int i = 0; i < n; i++) {
      vi iv(m);
      tv.push_back(iv);
      out.push_back(iv);
    }
    fill(v, out, 0, 0);
    tv = v;
    int tcnt = cnt; // 임시 치즈 수
    for (int i = 1; i < n - 1; i++) {
      for (int j = 1; j < m - 1; j++) {
        if (v[i][j]) {
          int air = 0; // 주변에 공기가 있는지 판단
          for (int k = 0; k < 4; k++) {
            air += out[i + dy[k]][j + dx[k]];
          }
          if (air) { // 공기가 있으면 치즈 지우기
            tv[i][j] = 0;
            tcnt--;
          }
        }
      }
    }
    v = tv;
    if (!tcnt) { // 치즈가 다 사라지면 종료
      cout << tme << "\n" << cnt;
      return 0;
    }
    cnt = tcnt;
    tme++;
  }
}