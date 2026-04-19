// 2024년 12월 4일 23:21:09
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  n = (n - 1) % 8;
  switch (n) {
    case 0:
      cout << 1;
      break;
    case 1:
    case 7:
      cout << 2;
      break;
    case 2:
    case 6:
      cout << 3;
      break;
    case 3:
    case 5:
      cout << 4;
      break;
    case 4:
      cout << 5;
  }
}