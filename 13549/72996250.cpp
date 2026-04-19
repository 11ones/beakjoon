// 2024년 2월 5일 23:40:48
// 맞았습니다!!
// 2416KB
// 0ms
#include <array>
#include <iostream>
#include <queue>
using namespace std;

array<int, 100'001> dp;

int main() {
  // ios::sync_with_stdio(false);
  // cin.tie(NULL);

  dp.fill(100'000);
  int n, k;
  cin >> n >> k;
  queue<int> q;
  q.push(n);
  dp[n] = 0;
  while (q.size()) {
    int pt = q.front();
    q.pop();
    int t = pt;
    if (t == 0) {
      if (dp[1] > dp[0] + 1) {
        dp[1] = dp[0] + 1;
        q.push(1);
      }
      continue;
    }
    t *= 2;
    while (t <= k) {
      if (dp[t] > dp[pt]) {
        dp[t] = dp[pt];
        if (t != k) {
          q.push(t);
        }
      }
      t *= 2;
    }
    if (t > k && dp[k] > dp[pt] + t - k) {
      dp[k] = dp[pt] + t - k;
    }
    if (dp[pt + 1] > dp[pt] + 1) {
      dp[pt + 1] = dp[pt] + 1;
      q.push(pt + 1);
    }
    if (dp[pt - 1] > dp[pt] + 1) {
      dp[pt - 1] = dp[pt] + 1;
      q.push(pt - 1);
    }
  }

  cout << dp[k];
}