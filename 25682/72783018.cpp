// 2024년 2월 1일 23:36:27
// 맞았습니다!!
// 17728KB
// 104ms
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n, m, k;
  cin >> n >> m >> k;
  int **arr = new int *[n + 1];
  for (int i = 0; i <= n; i++) {
    arr[i] = new int[m + 1] {};
  }
  char c, x;
  for (int i = 1; i <= n; i++) {
    i % 2 == 1 ? c = 'B' : c = 'W';
    for (int j = 1; j <= m; j++) {
      cin >> x;
      arr[i][j] = arr[i][j - 1] + arr[i - 1][j] - arr[i - 1][j - 1];
      if(x != c) {arr[i][j]++;}
      c == 'B' ? c = 'W' : c = 'B';
    }
  }
  int MAX = k * k;
  int mn = MAX;
  for (int i = 0; i <= n - k; i++) {
    for (int j = 0; j <= m - k; j++) {
      int tmp = arr[i + k][j + k] - arr[i + k][j] - arr[i][j + k] + arr[i][j];
      mn = min(mn, min(tmp, MAX - tmp));
    }
  }
  cout << mn;
}