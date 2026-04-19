// 2024년 2월 5일 23:27:25
// 틀렸습니다
// KB
// ms
#include <array>
#include <iostream>
#include <queue>
using namespace std;

array<int, 200'000> dp;

int main() {
  //ios::sync_with_stdio(false);
  //cin.tie(NULL);

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
    while (t < k) {
      if (dp[t] > dp[pt]) {
        dp[t] = dp[pt];
        q.push(t);
      }
      t *= 2;
    }
    if (dp[pt + 1] > dp[pt] + 1 && pt < k) {
      dp[pt + 1] = dp[pt] + 1;
      q.push(pt + 1);
    }
    if(dp[pt - 1] > dp[pt] + 1 && pt < 2 * k) {
      dp[pt - 1] = dp[pt] + 1;
      q.push(pt - 1);
    }
  }

  cout << dp[k];
}