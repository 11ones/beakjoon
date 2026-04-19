// 2024년 2월 7일 18:05:20
// 맞았습니다!!
// 2020KB
// 16ms
#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  int arr[3];
  int mx[2][3], mn[2][3];
  for (int i = 0; i < 3; i++) {
    cin >> arr[i];
    mx[0][i] = mn[0][i] = arr[i];
  }
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> arr[j];
    }
    mx[1][0] = arr[0] + max(mx[0][0], mx[0][1]);
    mx[1][1] = arr[1] + max(max(mx[0][0], mx[0][1]), mx[0][2]);
    mx[1][2] = arr[2] + max(mx[0][1], mx[0][2]);
    mn[1][0] = arr[0] + min(mn[0][0], mn[0][1]);
    mn[1][1] = arr[1] + min(min(mn[0][0], mn[0][1]), mn[0][2]);
    mn[1][2] = arr[2] + min(mn[0][1], mn[0][2]);
    for (int i = 0; i < 3; i++) {
      mx[0][i] = mx[1][i];
      mn[0][i] = mn[1][i];
    }
  }
  cout << max(max(mx[0][0], mx[0][1]), mx[0][2]) << " " << min(min(mn[0][0], mn[0][1]), mn[0][2]);
}