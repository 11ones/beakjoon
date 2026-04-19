// 2024년 10월 6일 16:08:49
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  array<array<int, 9>, 9> a{};
  array<array<array<pair<int, int>, 10>, 3>, 3> sq{};
  array<array<bool, 10>, 9> r{}, c{};

  char x;
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cin >> x;
      if (x != '.') {
        x -= '0';
        a[i][j] = x;
        if (r[i][x] || c[j][x] || sq[i / 3][j / 3][x].first) {
          for (; i < 9; i++) {
            for (; j < 9; j++) {
              cin >> x;
            }
          }
          cout << "ERROR";
          return 0;
        }
        r[i][x] = 1;
        c[j][x] = 1;
        sq[i / 3][j / 3][x] = {i % 3 + 1, j % 3 + 1};
      }
    }
  }
  int cnt = 1;
  while (cnt) {
    cnt = 0;
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        for (int k = 1; k <= 9; k++) {
          array<array<int, 3>, 3> t{};
          auto &p = sq[i][j];

          bool chk = 0;
          for (int l = 1; l <= 9; l++) {
            if (p[l].first) {
              if (l == k) {
                chk = 1;
                break;
              }
              t[p[l].first - 1][p[l].second - 1] = l;
            }
          }
          if (chk) continue;
          for (int l = 0; l < 3; l++) {
            if (r[i * 3 + l][k]) {
              for (int m = 0; m < 3; m++) {
                t[l][m] = k;
              }
            }
            if (c[j * 3 + l][k]) {
              for (int m = 0; m < 3; m++) {
                t[m][l] = k;
              }
            }
          }
          int blk = 0;
          int by, bx;
          for (int l = 0; l < 3; l++) {
            for (int m = 0; m < 3; m++) {
              if (!t[l][m]) {
                blk++;
                by = l;
                bx = m;
              }
            }
          }
          if (!blk) {
            cout << "ERROR";
            return 0;
          }
          if (blk == 1) {
            cnt++;
            a[i * 3 + by][j * 3 + bx] = k;
            r[i * 3 + by][k] = 1;
            c[j * 3 + bx][k] = 1;
            p[k] = {by + 1, bx + 1};
          }
        }
      }
    }
  }
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cout << (a[i][j] ? (char)(a[i][j] + '0') : '.');
    }
    cout << '\n';
  }
}