// 2025년 5월 7일 21:12:33
// 맞았습니다!!
// 2084KB
// 4ms
#include <bits/stdc++.h>
using namespace std;

int w = 0, b = 0;
array<array<int, 128>, 128> v{};

int run(int y, int x, int s) {
  if(s == 1) {
      b += v[y][x];
      w += !v[y][x];
      return v[y][x];
  }
  int t = 0, h = s / 2;
  t += run(y, x, h);
  t += run(y + h, x, h);
  t += run(y, x + h, h);
  t += run(y + h, x + h, h);
  if(t == s * s) b -= 3;
  if(t == 0) w -= 3;
  return t;
}

int main() {
  int n;
  cin >> n;
  for(int i = 0; i < n; ++i) {
    for(int j = 0; j < n; ++j) {
      cin >> v[i][j];
    }
  }
  run(0, 0, n);
  cout << w << "\n" << b;
}