// 2024년 5월 19일 15:41:49
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
  for(int i = 0; i < n; i++) {
    d[i] = new int[3]{};
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> arr[i][j];
    }
  }
  for (int o = 0; o < 3; o++) {
    fill(&d[0][0], &d[n - 1][3], 0);
    d[0][o] = arr[0][o];
    d[0][(o + 1) % 3] = d[0][(o + 2) % 3] = 1e4;
    for (int i = 1; i < n - 1; i++) {
      for (int j = 0; j < 3; j++) {
        d[i][j] = arr[i][j] + min(d[i - 1][(j + 1) % 3], d[i - 1][(j + 2) % 3]);
      }
    }
    d[n - 1][(o + 1) % 3] = arr[n - 1][(o + 1) % 3] + min(d[n - 2][o], d[n - 2][(o + 2) % 3]);
    d[n - 1][(o + 2) % 3] = arr[n - 1][(o + 2) % 3] + min(d[n - 2][o], d[n - 2][(o + 1) % 3]);
    mn = min(mn, min(d[n - 1][(o + 1) % 3], d[n - 1][(o + 2) % 3]));
  }
  cout << mn;
}