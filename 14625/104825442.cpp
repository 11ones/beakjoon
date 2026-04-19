// 2026년 4월 8일 03:02:17
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int a, b, x, y, N, c = 0;
  cin >> a >> b >> x >> y >> N;
  while (a != x || b != y) {
    c += (a % 10 == N) | (a / 10 % 10 == N) | (b % 10 == N) | (b / 10 % 10 == N);
    a += ++b / 60;
    b %= 60;
  }
  c += (a % 10 == N) | (a / 10 % 10 == N) | (b % 10 == N) | (b / 10 % 10 == N);
  cout << c;
}