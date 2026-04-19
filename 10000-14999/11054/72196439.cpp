// 2024년 1월 22일 23:15:04
// 틀렸습니다
// KB
// ms
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  int *arr = new int[n + 2];
  arr[0] = arr[n + 1] = 0;
  for (int i = 1; i <= n; i++) {
    cin >> arr[i];
  }
  int *Inc = new int[n + 1];
  int *Dec = new int[n + 1];
  for (int i = 1; i <= n; i++) {
    int tmp = 0;
    for (int j = i - 1; j >= 0; j--) {
      if (arr[j] < arr[i]) {
        tmp = j;
        break;
      }
    }
    if (Inc[i - 1] < Inc[tmp] + 1) {
      Inc[i] = Inc[tmp] + 1;
    } else {
      Inc[i] = Inc[i - 1];
    }
    for (int j = i - 1; j >= 0; j--) {
      if (arr[n + 2 - j] < arr[n + 2 - i]) {
        tmp = j;
        break;
      }
    }
    if (Dec[i] < Dec[tmp] + 1) {
      Dec[i] = Dec[tmp] + 1;
    } else {
      Dec[i] = Dec[i - 1];
    }
  }
  int mx = 0;
  for (int i = 1; i <= n; i++) {
    if (mx < Inc[i] + Dec[n + 1 - i] - 1) {
      mx = Inc[i] + Dec[n + 1 - i] - 1;
    }
  }
  cout << mx;
}