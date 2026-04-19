// 2024년 3월 19일 22:33:29
// 맞았습니다!!
// 2020KB
// 0ms
#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int *arr = new int[n], *dp = new int[k + 1]{};
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n);
  for (int i = 0; i < n; i++) {
    dp[arr[i]]++;
    for (int j = arr[i] + 1; j <= k; j++) {
      dp[j] += dp[j - arr[i]];
    }
  }
  cout << dp[k];
}