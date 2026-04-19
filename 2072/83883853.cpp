// 2024년 9월 14일 16:06:56
// 틀렸습니다
// KB
// ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, a, b, ta, tb, cnt;
  cin >> n;
  array<array<int, 19>, 19> v{};
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    v[a][b] = i % 2 + 1;

    ta = a;
    tb = 0;
    cnt = 0;
    while (tb != 19) {
      if (v[ta][tb] == i % 2 + 1) {
        cnt++;
      } else {
        if (cnt == 5) {
          break;
        } else {
          cnt = 0;
        }
      }
      tb++;
    }
    if (cnt != 5) {
      ta = 0;
      tb = b;
      cnt = 0;
      while (ta != 19) {
        if (v[ta][tb] == i % 2 + 1) {
          cnt++;
        } else {
          if (cnt == 5) {
            break;
          } else {
            cnt = 0;
          }
        }
        ta++;
      }
    }
    if (cnt != 5) {
      ta = a - min(a, b);
      tb = b - min(a, b);
      cnt = 0;
      while (ta != 19 && tb != 19) {
        if (v[ta][tb] == i % 2 + 1) {
          cnt++;
        } else {
          if (cnt == 5) {
            break;
          } else {
            cnt = 0;
          }
        }
        ta++;
        tb++;
      }
    }
    if (cnt != 5) {
      ta = a - min(a, 18 - b);
      tb = b + min(a, 18 - b);
      cnt = 0;
      while (ta != 19 && tb != 0) {
        if (v[ta][tb] == i % 2 + 1) {
          cnt++;
        } else {
          if (cnt == 5) {
            break;
          } else {
            cnt = 0;
          }
        }
        ta++;
        tb--;
      }
    }
    if (cnt == 5) {
      cout << i + 1;
      for (i++; i < n; i++) {
        cin >> a >> b;
      }
      return 0;
    }
  }
  cout << -1;
}