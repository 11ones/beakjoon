// 2024년 7월 24일 23:28:57
// 맞았습니다!!
// 7696KB
// 112ms
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int tc;
  cin >> tc;
  for (int o = 0; o < tc; o++) {
    int n;
    cin >> n;
    int **a = new int *[n];
    for (int i = 0; i < n; i++) {
      a[i] = new int[n]{};
    }
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
      a[i][i] = v[i];
    }
    for (int i = 0; i < n; i++) {
      for (int j = i; j < n; j++) {
        a[i][j] = a[i][j - 1] + v[j];
      }
      a[i][i] = 0;
    }
    for (int i = 2; i < n; i++) {
      int y = 0, x = i;
      for (int j = i; j < n; j++) {
        int mn = 1'000'000'000;
        for (int k = y; k < x; k++) {
          mn = min(mn, a[y][k] + a[k + 1][x]);
        }
        a[y][x] += mn;
        y++;
        x++;
      }
    }
    cout << a[0][n - 1] << '\n';
  }
}