// 2024년 4월 3일 22:30:12
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  int *arr = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int *d = new int[n];
  int mx = 0;
  for (int i = 0; i < n; i++) {
    int j;
    int tmx = -1;
    int tmxp = -1;
    for (j = i - 1; j >= 0; j--) {
      if (arr[j] < arr[i] && tmx < d[j]) {
        tmx = d[j];
        tmxp = j;
      }
    }
    if (tmx == -1) {
      d[i] = arr[i];
    } else {
      d[i] = d[tmxp] + arr[i];
    }
    mx = max(mx, d[i]);
  }
  cout << mx;
}