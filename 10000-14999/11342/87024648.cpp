// 2024년 11월 30일 16:58:49
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  cin.ignore(2, '\n');
  while (n--) {
    array<int, 2> a{};
    int p = 0;
    for (int i = 0; i < 9; i++) {
      char c, c2;
      cin >> c;
      if (c == 'X') {
        p += 10 * (1 + a[0] + a[1]);
        a[0] = max(0, a[0] - 1) + !!a[1];
        a[1] = max(0, a[1] - 1);
        a[1]++;
        continue;
      }
      p += (c - '0') * (1 + a[0] + a[1]);
      a[0] = max(0, a[0] - 1) + !!a[1];
      a[1] = max(0, a[1] - 1);
      cin >> c2;
      if (c2 == '/') {
        p += (10 - c + '0') * (1 + a[0] + a[1]);
        a[0] = max(0, a[0] - 1) + !!a[1];
        a[1] = max(0, a[1] - 1);
        a[0]++;
      } else {
        p += (c2 - '0') * (1 + a[0] + a[1]);
        a[0] = max(0, a[0] - 1) + !!a[1];
        a[1] = max(0, a[1] - 1);
      }
    }
    char c, c2, c3;
    cin >> c >> c2;
    if (c == 'X') {
      p += 10 * (a[0] + a[1]);
      a[0] = max(0, a[0] - 1) + !!a[1];
      a[1] = max(0, a[1] - 1);
      cin >> c3;
      if (c2 == 'X') {
        p += 10 * (a[0] + a[1]);
        a[0] = max(0, a[0] - 1) + !!a[1];
        a[1] = max(0, a[1] - 1);
        if (c3 == 'X') {
          p += 30;
        } else {
          p += 20 + c3 - '0';
        }
      } else {
        p += (c2 - '0') * (a[0] + a[1]);
        a[0] = max(0, a[0] - 1) + !!a[1];
        a[1] = max(0, a[1] - 1);
        if (c3 == '/') {
          p += 20;
        } else {
          p += 10 + c2 + c3 - '0' * 2;
        }
      }
    } else {
      p += (c - '0') * (a[0] + a[1]);
      a[0] = max(0, a[0] - 1) + !!a[1];
      a[1] = max(0, a[1] - 1);
      if (c2 == '/') {
        p += (10 - c + '0') * (a[0] + a[1]);
        a[0] = max(0, a[0] - 1) + !!a[1];
        a[1] = max(0, a[1] - 1);
        cin >> c3;
        if (c3 == 'X') {
          p += 20;
        } else {
          p += 10 + c3 - '0';
        }
      } else {
        p += (c2 - '0') * (a[0] + a[1]);
        a[0] = max(0, a[0] - 1) + !!a[1];
        a[1] = max(0, a[1] - 1);
        p += c + c2 - '0' * 2;
      }
    }
    cout << p << '\n';
  }
}