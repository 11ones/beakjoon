// 2024년 3월 15일 22:47:27
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int *arr = new int[n]{}, *dp = new int[n]{};
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    int mx = arr[i];
    for (int j = 0; j < i; j++) {
      mx = max(mx, dp[j] + dp[i - j - 1]);
    }
    dp[i] = mx;
  }
  cout << dp[n - 1];
}