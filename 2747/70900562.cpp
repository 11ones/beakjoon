// 2023년 12월 29일 19:30:14
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

  int *arr = new int[n + 1];
  for (int i = 0; i <= n; i++) {
    if(i == 0) arr[i] = 0;
    else if(i == 1) arr[i] = 1;
    else arr[i] = arr[i - 1] + arr[i - 2];
  }
  cout << arr[n];
}