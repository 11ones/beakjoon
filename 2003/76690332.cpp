// 2024년 4월 10일 07:19:25
// 맞았습니다!!
// 2020KB
// 40ms
#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int *arr = new int[n + 1];
  for (int i = 1; i <= n; i++) {
    cin >> arr[i];
    arr[i] += arr[i - 1];
  }
  int cnt = 0;
  for(int i = 1; i <= n; i++) {
    for(int j = 0; j < i; j++) {
      if(arr[i] - arr[j] == m) {
        cnt++;
      }
    }
  }
  cout << cnt;
}