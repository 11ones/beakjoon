// 2025년 3월 18일 15:10:07
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, c, x, y, p = 0;
  cin >> r >> c >> x >> y >> x >> y;
  char t;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> t;
      if (t == 'P') p++;
    }
  }
	cout << (p != x * y ? 1 : 0);
}