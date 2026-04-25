// 2024년 5월 19일 15:59:42
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int **arr = new int *[n], **d = new int *[n], mn = 1e9;
  for (int i = 0; i < n; i++) {
    arr[i] = new int[3]{};
  }
  for (int i = 0; i < n; i++) {
    d[i] = new int[3]{};
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> arr[i][j];
    }
  }
  for (int o = 0; o < 3; o++) {
    int a = (o + 1) % 3, b = (o + 2) % 3;
    fill(&d[0][0], &d[n - 1][3], 0);
    d[0][o] = arr[0][o];
    d[0][a] = d[0][b] = 1e4;
    for (int i = 1; i < n - 1; i++) {
      for (int j = 0; j < 3; j++) {
        d[i][j] = arr[i][j] + min(d[i - 1][(j + 1) % 3], d[i - 1][(j + 2) % 3]);
      }
    }
    d[n - 1][a] = arr[n - 1][a] + min(d[n - 2][o], d[n - 2][b]);
    d[n - 1][b] = arr[n - 1][b] + min(d[n - 2][o], d[n - 2][a]);
    mn = min(mn, min(d[n - 1][a], d[n - 1][b]));
  }
  cout << mn;
}