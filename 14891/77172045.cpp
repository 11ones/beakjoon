// 2024년 4월 18일 23:45:06
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  char arr[4][8]; // 톱니바퀴의 초기상태
  int p[4]{};     // 돌아간 칸수
  bool sn[3]{};   // 극이 다르면 1
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 8; j++) {
      cin >> arr[i][j];
    }
  }
  int k;
  cin >> k;
  for (int o = 0; o < k; o++) {
    int a, b;
    cin >> a >> b;
    a--;
    for (int i = 1; i < 4; i++) { // 맞닿은 톱니가 같은 극인지 판별
      if (arr[i][(6 + p[i]) % 8] != arr[i - 1][(2 + p[i - 1]) % 8]) {
        sn[i - 1] = 1;
      } else {
        sn[i - 1] = 0;
      }
    }
    p[a] = (8 + p[a] - b) % 8; // 현재 톱니 회전
    int tb = b;
    for (int i = a - 1; i >= 0; i--) { // 앞의 톱니가 다른 극일 때 회전
      if (!sn[i]) {
        break;
      }
      p[i] = (8 + p[i] + tb) % 8;
      tb = -tb;
    }
    tb = b;
    for (int i = a; i < 3; i++) { // 뒤의 톱니가 다른 극일 때 회전
      if (!sn[i]) {
        break;
      }
      p[i + 1] = (8 + p[i + 1] + tb) % 8;
      tb = -tb;
    }
  }
  int sum = 0, r = 1;
  for (int i = 0; i < 4; i++) {
    sum += (arr[i][p[i]] - '0') * r;
    r *= 2;
  }
  cout << sum;
}