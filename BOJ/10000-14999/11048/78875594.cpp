// 2024년 5월 26일 23:59:40
// 맞았습니다!!
// 9808KB
// 236ms
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int **arr = new int *[n + 1], **d = new int *[n + 1];
  for (int i = 0; i <= n; i++) {
    arr[i] = new int[m + 1]{};
    d[i] = new int[m + 1]{};
  }
  d[n] = new int[m + 1]{};

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> arr[i][j];
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      d[i][j] = arr[i][j] + max({d[i - 1][j], d[i][j - 1], d[i - 1][j - 1]});
    }
  }
  cout << d[n][m];
}