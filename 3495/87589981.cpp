// 2024년 12월 18일 23:23:39
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w, r = 0;
  cin >> h >> w;
  char c;
  for (int i = 0; i < h; i++) {
    int b = 0;
    for (int j = 0; j < w; j++) {
      cin >> c;
      if (c != '.') b++;
      if (b % 2) r++;
    }
  }
  cout << r;
}