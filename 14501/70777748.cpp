// 2023년 12월 26일 23:09:50
// 맞았습니다!!
// 2020KB
// 0ms
#include <iostream>
using namespace std;

typedef pair<int, int> p;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  p *arr = new p[n];
  int *dp = new int[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i].first >> arr[i].second;
  }
  int max = 0;
  for (int i = 0; i < n; i++) {
    if (i + arr[i].first <= n &&
        dp[i + arr[i].first - 1] < dp[i - 1] + arr[i].second) {
      dp[i + arr[i].first - 1] = dp[i - 1] + arr[i].second;
      if (dp[i + arr[i].first - 1] > max)
        max = dp[i + arr[i].first - 1];
    }
    if (i != 0 && dp[i - 1] > dp[i])
      dp[i] = dp[i - 1];
  }
  cout << max;
}