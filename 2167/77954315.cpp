// 2024년 5월 6일 22:31:16
// 맞았습니다!!
// 2284KB
// 476ms
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int **arr = new int *[n + 1];
  for (int i = 0; i <= n; i++) {
    arr[i] = new int[m + 1]{};
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> arr[i][j];
      arr[i][j] += arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1];
    }
  }
  int k;
  cin >> k;
  for (int o = 0; o < k; o++) {
    int i, j, x, y;
    cin >> i >> j >> x >> y;
    cout << arr[x][y] - arr[i - 1][y] - arr[x][j - 1] + arr[i - 1][j - 1]
         << '\n';
  }
}