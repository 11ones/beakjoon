// 2024년 2월 3일 00:04:41
// 맞았습니다!!
// 2024KB
// 0ms
#include <iostream>
using namespace std;
typedef long long l;

l n, b;

int arr[37][5][5];
int ans[5][5];

l p(int y) {
  l t = 1;
  for (int i = 0; i < y; i++) {
    t *= 2;
  }
  return t;
}

void m(int x) {
  int tmp[5][5] = {};
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        tmp[i][j] += ans[i][k] * arr[x][k][j];
      }
      tmp[i][j] %= 1000;
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      ans[i][j] = tmp[i][j];
    }
  }
}

void dnc(l x) {
  if (x == 1) {
    m(0);
    return;
  }
  l t = 1;
  for (int i = 1; i < 64; i++) {
    t *= 2;
    if (x < t) {
      t /= 2;
      m(i - 1);
      break;
    }
  }
  if (x == t)
    return;
  dnc(x - t);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n >> b;

  for (int i = 0; i < n; i++) {
    ans[i][i] = 1;
    for (int j = 0; j < n; j++) {
      cin >> arr[0][i][j];
    }
  }
  for (int t = 1; t <= 36; t++) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        for (int k = 0; k < n; k++) {
          arr[t][i][j] += arr[t - 1][i][k] * arr[t - 1][k][j];
        }
        arr[t][i][j] %= 1000;
      }
    }
  }
  dnc(b);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << ans[i][j] << " ";
    }
    cout << '\n';
  }
}