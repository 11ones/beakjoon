// 2024년 8월 2일 22:59:27
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  int wl[3][3] = {{0, -1, 1}, {1, 0, -1}, {-1, 1, 0}};
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    a[i]--;
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
    b[i]--;
  }
  int sav = 1, mx = 0, cnt = 0;
  for (int i = 0; i < n; i++) {
    switch (wl[a[i]][b[i]]) {
    case -1:
      if (sav != 1) {
        cnt++;
      } else {
        sav = -1;
        mx = max(mx, cnt);
        cnt = 1;
      }
      break;
    case 0:
      if (sav != 1) {
        sav = 1;
        mx = max(mx, cnt);
        cnt = 1;
      } else {
        sav = -1;
        mx = max(mx, cnt);
        cnt = 1;
      }
      break;
    case 1:
      if (sav != 1) {
        sav = 1;
        mx = max(mx, cnt);
        cnt = 1;
      } else {
        cnt++;
      }
    }
  }
  cout << max(mx, cnt);
}