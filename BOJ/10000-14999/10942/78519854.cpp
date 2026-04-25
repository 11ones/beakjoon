// 2024년 5월 18일 23:39:12
// 맞았습니다!!
// 5992KB
// 248ms
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m, f = 0, s = 0;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  bool **arr = new bool *[n];
  for (int i = 0; i < n; i++) {
    arr[i] = new bool[n]{};
  }
  
  while (s < n) {
    int tf = f, ts = s;
    while (1) {
      if (v[tf] == v[ts])
        arr[tf][ts] = 1;
      else
        break;
      tf--;
      ts++;
      if (tf < 0 || ts >= n)
        break;
    }
    if (f == s)
      s++;
    else
      f++;
  }
  cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> f >> s;
    cout << arr[f - 1][s - 1] << '\n';
  }
}