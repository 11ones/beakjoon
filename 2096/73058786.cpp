// 2024년 2월 6일 23:51:06
// 메모리 초과
// KB
// ms
#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  int **arr = new int *[n];
  for (int i = 0; i < n; i++) {
    arr[i] = new int[3];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> arr[i][j];
    }
  }
  int **dx = new int *[n];
  int **dn = new int *[n];
  for (int i = 0; i < n; i++) {
    dx[i] = new int[3];
    dn[i] = new int[3];
  }
  for (int i = 0; i < 3; i++) {
    dx[0][i] = dn[0][i] = arr[0][i];
  }
  for (int i = 1; i < n; i++) {
    dx[i][0] = arr[i][0] + max(dx[i - 1][0], dx[i - 1][1]);
    dx[i][1] = arr[i][1] + max(max(dx[i - 1][0], dx[i - 1][1]), dx[i - 1][2]);
    dx[i][2] = arr[i][2] + max(dx[i - 1][1], dn[i - 1][2]);
    dn[i][0] = arr[i][0] + min(dn[i - 1][0], dn[i - 1][1]);
    dn[i][1] = arr[i][1] + min(min(dn[i - 1][0], dn[i - 1][1]), dn[i - 1][2]);
    dn[i][2] = arr[i][2] + min(dn[i - 1][1], dn[i - 1][2]);
  }
  cout << max(max(dx[n - 1][0], dx[n - 1][1]), dx[n - 1][2]) << " "
       << min(min(dn[n - 1][0], dn[n - 1][1]), dn[n - 1][2]);
}