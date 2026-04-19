// 2024년 9월 19일 23:17:36
// 맞았습니다!!
// 2020KB
// 0ms
#include <bits/stdc++.h>
using namespace std;
int n;

int f(char **arr, int p, int d) {
  int mx = 0, t = 1;
  if (d) {
    char c = arr[0][p];
    for (int i = 1; i < n; i++) {
      if (c == arr[i][p]) {
        t++;
        continue;
      }
      mx = max(mx, t);
      c = arr[i][p];
      t = 1;
    }
  } else {
    char c = arr[p][0];
    for (int i = 1; i < n; i++) {
      if (c == arr[p][i]) {
        t++;
        continue;
      }
      mx = max(mx, t);
      c = arr[p][i];
      t = 1;
    }
  }
  mx = max(mx, t);
  return mx;
}

int main() {
  cin >> n;
  char **arr = new char *[n];
  for (int i = 0; i < n; i++) {
    arr[i] = new char[n];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }
  int mx = 0;
  for (int i = 0; i < n; i++) {
    mx = max(mx, f(arr, i, 0));
    mx = max(mx, f(arr, i, 1));
  }
  for (int i = 0; i < n; i++) {
    for (int j = 1; j < n; j++) {
      if (arr[i][j - 1] != arr[i][j]) {
        swap(arr[i][j - 1], arr[i][j]);
        mx = max(mx, f(arr, i, 0));
        mx = max(mx, f(arr, j - 1, 1));
        mx = max(mx, f(arr, j, 1));
        swap(arr[i][j - 1], arr[i][j]);
      }
    }
  }
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (arr[i - 1][j] != arr[i][j]) {
        swap(arr[i - 1][j], arr[i][j]);
        mx = max(mx, f(arr, j, 1));
        mx = max(mx, f(arr, i - 1, 0));
        mx = max(mx, f(arr, i, 0));
        swap(arr[i - 1][j], arr[i][j]);
      }
    }
  }
  cout << mx;
}