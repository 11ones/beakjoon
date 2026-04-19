// 2023년 12월 26일 23:29:02
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
#include <string>
using namespace std;

int arr[100];
int op[4];
int used[4];

int n;
int mn = 1000000000;
int mx = -1000000000;

void find(int x, int res) {
  if (x >= n) {
    if (res > mx)
      mx = res;
    if (res < mn)
      mn = res;
    return;
  }
  for (int i = 0; i < 4; i++) {
    if (op[i] > used[i]) {
      int tmp = res;
      used[i]++;
      switch (i) {
      case 0:
        tmp += arr[x];
        break;
      case 1:
        tmp -= arr[x];
        break;
      case 2:
        tmp *= arr[x];
        break;
      case 3:
        tmp /= arr[x];
      }
      find(x + 1, tmp);
      used[i]--;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < 4; i++) {
    cin >> op[i];
  }

  find(1, arr[0]);
  cout << mx << '\n' << mn;
}