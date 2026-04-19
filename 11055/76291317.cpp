// 2024년 4월 3일 22:19:43
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
  int *arr = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int *d = new int[n];
  for (int i = 0; i < n; i++) {
    int j;
    for(j = i - 1; j >= 0; j--) {
      if(arr[j] <= arr[i]) {
        d[i] = d[j] + arr[i];
        break;
      }
    }
    if(j < 0) {
      d[i] = arr[i];
    }
  }
  int mx = 0;
  for(int i = 0; i < n; i++) {
    mx = max(mx, d[i]);
  }
  cout << mx;
}