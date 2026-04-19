// 2024년 4월 17일 23:43:21
// 맞았습니다!!
// 2020KB
// 4ms
#include <iostream>
using namespace std;
typedef pair<int, int> p;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
char arr[10][10];
int n, m;
int mn = 11; // 최소로 움직인 횟수
p O; // 구멍 위치

// 이전에 움직인 방향, 움직인 횟수, R구슬 위치, B구슬 위치
void f(int x, int d, p R, p B) {
  if (d >= 10) { // 10번 초과하여 움직이면 그 case는 종료
    return;
  }
  for (int i = 0; i < 4; i++) {
    if (i == x) { // 이전에 움직인 방향으론 다시 움직일 필요 없음
      continue;
    }
    int tmn = 11; // 현재 case에서 구멍에 들어갔을 때 움직인 횟수를 저장
    p tR = R, tB = B;
    bool chk = 0; // 구슬이 구멍에 들어갔는 지 판단하는 용도
    
    while (arr[tB.first][tB.second] != '#' && tB != tR) { // 한칸씩 진행시키며 구멍에 들어갔는 지 판단
      tB.first += dy[i];
      tB.second += dx[i];
      if (tB == O) {
        chk = 1;
        break;
      }
    }
    if (chk) { // B구슬이 구멍에 들어가면 그 case는 종료
      continue;
    }
    tB.first -= dy[i];
    tB.second -= dx[i];
    
    while (arr[tR.first][tR.second] != '#' && tB != tR) {
      tR.first += dy[i];
      tR.second += dx[i];
      if (tR == O) { // R구슬이 들어간 뒤 B구슬도 들어갈 수 있으므로 B구슬까지 굴려봄
        tmn = d;
        chk = 1;
        tR = {0, 0};
      }
    }
    tR.first -= dy[i];
    tR.second -= dx[i];
    
    while (arr[tB.first][tB.second] != '#' && tB != tR) { // R에 막혀서 못 지나갔을 수 있으니 한번 더 진행
      tB.first += dy[i];
      tB.second += dx[i];
      if (tB == O) {
        tmn = 11; // B구슬이 들어가면 안됨
        chk = 1;
        break;
      }
    }
    if (chk) {
      mn = min(mn, tmn);
      continue;
    }
    tB.first -= dy[i];
    tB.second -= dx[i];
    f(i, d + 1, tR, tB);
  }
}

int main() {
  cin >> n >> m;
  p R, B;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
      if (arr[i][j] == 'R') {
        R = {i, j};
      }
      if (arr[i][j] == 'B') {
        B = {i, j};
      }
      if (arr[i][j] == 'O') {
        O = {i, j};
      }
    }
  }
  f(-1, 0, R, B);
  cout << ((mn == 11) ? -1 : mn + 1);
}