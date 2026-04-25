// 2024년 11월 14일 23:18:58
// 맞았습니다!!
// 2024KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int mx = 0;
  string s;
  array<int, 5> a{};
  cin >> s;
  for (auto e : s) {
    switch (e) {
      case 'q':
        a[0]++;
        break;
      case 'u':
        if (!a[0]) {
          cout << -1;
          return 0;
        }
        a[0]--;
        a[1]++;
        break;
      case 'a':
        if (!a[1]) {
          cout << -1;
          return 0;
        }
        a[1]--;
        a[2]++;
        break;
      case 'c':
        if (!a[2]) {
          cout << -1;
          return 0;
        }
        a[2]--;
        a[3]++;
        break;
      case 'k':
        if (!a[3]) {
          cout << -1;
          return 0;
        }
        a[3]--;
        a[4]++;
        break;
    }
    mx = max(mx, a[0] + a[1] + a[2] + a[3]);
  }
  if (a[0] + a[1] + a[2] + a[3])
    cout << -1;
  else
    cout << mx;
}