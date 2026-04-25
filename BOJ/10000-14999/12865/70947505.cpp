// 2023년 12월 30일 23:15:36
// 틀렸습니다
// KB
// ms
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int n, k, w, v;
  cin >> n >> k;
  vector<pair<int, int>> wv;
  int *dp = new int[k + 1];

  for (int i = 0; i < n; i++) {
    cin >> w >> v;
    wv.push_back({w, v});
  }

  for (int i = 1; i <= n; i++) {
    int w = wv[i].first;
    int v = wv[i].second;
    for (int j = w; j <= k; j++) {
      if (dp[j] < dp[j - w] + v) {
        dp[j] = dp[j - w] + v;
      }
    }
  }

  cout << dp[k];
}