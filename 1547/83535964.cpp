// 2024년 9월 6일 22:28:14
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>

using namespace std;

int main() {

  ios_base::sync_with_stdio(false);

  cin.tie(NULL);

  int m, x, y, p = 1;

  cin >> m;

  for (int i = 0; i < m; i++) {

    cin >> x >> y;

    if (x == p) {

      p = y;

    } else if (y == p) {

      p = x;

    }

  }

  cout << p;

}