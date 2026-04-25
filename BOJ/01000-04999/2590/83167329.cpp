// 2024년 8월 29일 23:12:43
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int cnt = 0;
  array<int, 6> a;
  for (int i = 0; i < 6; i++) {
    cin >> a[i];
  }
  cnt += a[5] + a[4] + a[3] + (a[2] + 3) / 4;
  a[0] = max(0, a[0] - a[4] * 11);
  if (a[1] < a[3] * 5)
    a[0] = max(0, a[0] - (a[3] * 5 - a[1]) * 4);
  a[1] = max(0, a[1] - a[3] * 5);
  if (a[2]) {
    switch (a[2] % 4) {
    case 1:
      if (a[1] < 5)
        a[0] = max(0, a[0] - (5 - a[1]) * 4 - 7);
      else
        a[0] = max(0, a[0] - 7);
      a[1] = max(0, a[1] - 5);
      break;
    case 2:
      if (a[1] < 3)
        a[0] = max(0, a[0] - (3 - a[1]) * 4 - 6);
      else
        a[0] = max(0, a[0] - 6);
      a[1] = max(0, a[1] - 3);
      break;
    case 3:
      if (a[1] < 1)
        a[0] = max(0, a[0] - (1 - a[1]) * 4 - 5);
      else
        a[0] = max(0, a[0] - 5);
      a[1] = max(0, a[1] - 1);
    }
  }
  cnt += (a[1] + 8) / 9;
  if (a[1]) {
    a[0] = max(0, a[0] - (9 - a[1] % 9) * 4);
  }
  cnt += (a[0] + 35) / 36;
  cout << cnt;
}