// 2024년 5월 18일 23:18:58
// 맞았습니다!!
// 17736KB
// 256ms
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  int **arr = new int *[n];
  for (int i = 0; i < n; i++) {
    arr[i] = new int[n]{};
  }
  auto f = 0, s = 0;
  while (s < n) {
    auto tf = f, ts = s;
    while (1) {
      if (v[tf] == v[ts]) {
        arr[tf][ts] = 1;
      } else {
        break;
      }
      tf--;
      ts++;
      if (tf < 0 || ts >= n) {
        break;
      }
    }
    if (f == s) {
      s++;
    } else {
      f++;
    }
  }
  int m;
  cin >> m;
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    cout << arr[a - 1][b - 1] << '\n';
  }
}