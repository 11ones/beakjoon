// 2024년 4월 20일 14:03:07
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int dice[6] = {};
int face[5] = {5, 2, 3, 1, 4}; // 아래, 동, 서, 북, 남 (문제에 적힌 면의 숫자 - 1)

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m, x, y, k;
  cin >> n >> m >> y >> x >> k;
  int **arr = new int *[n];
  for (int i = 0; i < n; i++) {
    arr[i] = new int[m];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  for (int o = 0; o < k; o++) {
    int t;
    cin >> t;
    switch (t) {
    case 1: 
      if (x == m - 1)
        continue;
      // 동쪽으로 전진하면서 회전
      x++;
      face[2] = face[0];
      face[0] = face[1];
      face[1] = 5 - face[2];
      break;
    case 2:
      if (x == 0)
        continue;
      // 서쪽으로 전진하면서 회전
      x--;
      face[1] = face[0];
      face[0] = face[2];
      face[2] = 5 - face[1];
      break;
    case 3:
      if (y == 0)
        continue;
      // 북쪽으로 전진하면서 회전
      y--;
      face[4] = face[0];
      face[0] = face[3];
      face[3] = 5 - face[4];
      break;
    case 4:
      if (y == n - 1)
        continue;
       // 남쪽으로 전진하면서 회전
      y++;
      face[3] = face[0];
      face[0] = face[4];
      face[4] = 5 - face[3];
    }
    cout << dice[5 - face[0]] << "\n"; // 주사위 윗면 출력 (아랫면 + 윗면 = 5)
    if (arr[y][x]) { // 칸의 수가 0이 아닌경우
      dice[face[0]] = arr[y][x];
      arr[y][x] = 0;
    } else {
      arr[y][x] = dice[face[0]];
    }
  }
}