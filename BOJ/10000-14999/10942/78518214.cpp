// 2024년 5월 18일 23:01:12
// 시간 초과
// KB
// ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
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
    bool chk = 0;
    while (1) {
      arr[tf][ts] = 1;
      tf--;
      ts++;
      if (tf < 0 || ts >= n) {
        break;
      }
      if (v[tf] != v[ts]) {
        chk = 1;
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
  for(int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    cout << arr[a - 1][b - 1] << '\n';
  }
}