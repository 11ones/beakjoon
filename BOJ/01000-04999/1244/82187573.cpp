// 2024년 8월 7일 23:58:24
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  bool *arr = new bool[n];
  for(int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int m;
  cin >> m;
  for(int o = 0; o < m; o++) {
    int a, b;
    cin >> a >> b;
    b--;
    if(a == 1) {
      int t = b;
      while(t < n) {
        arr[t] = !arr[t];
        t += b + 1;
      }
      continue;
    }
    arr[b] = !arr[b];
    for(int i = 1;;i++) {
      if(b - i < 0 || b + i >= n || arr[b + i] != arr[b - i]) {
        break;
      }
      arr[b - i] = !arr[b - i];
      arr[b + i] = !arr[b + i];
    }
  }
  for(int i = 0; i < n; i++) {
    cout << arr[i] << " ";
    if(i % 20 == 19) {
      cout << '\n';
    }
  }
}