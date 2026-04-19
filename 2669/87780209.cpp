// 2024년 12월 24일 22:49:17
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a[101][101] = {};
  for(int i = 0; i < 4; i++) {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    for(int j = y1; j < y2; j++) {
      for(int k = x1; k < x2; k++) {
        a[j][k] = 1;
      }
    }
  }
  int c = 0;
  for(int i = 0; i < 101; i++) {
    for(int j = 0; j < 101; j++) {
      c += a[i][j];
    }
  }
  cout << c;
}