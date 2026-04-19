// 2024년 9월 2일 00:42:06
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>

using namespace std;

int main() {

  ios_base::sync_with_stdio(false);

  cin.tie(NULL);

  int n, mx = 0;

  cin >> n;

  for (int o = 0; o < n; o++) {

    array<int, 7> a{};

    for (int i = 0; i < 3; i++) {

      int x;

      cin >> x;

      a[x]++;

    }

    for (int i = 6; i > 0; i--) {

      switch (a[i]) {

      case 1:

        mx = max(mx, 100 * i);

        break;

      case 2:

        mx = max(mx, 1000 + 100 * i);

        break;

      case 3:

        mx = max(mx, 10000 + 1000 * i);

      }

    }

  }

  cout << mx;

}