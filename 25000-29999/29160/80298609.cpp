// 2024년 6월 30일 17:23:08
// 런타임 에러 (OutOfBounds)
// KB
// ms
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, k;
  cin >> n >> k;
  vector<priority_queue<int>> q(n);
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    q[a - 1].push(b);
  }
  for (int o = 0; o < k; o++) {
    for (int i = 0; i < 11; i++) {
      if (!q[i].empty()) {
        int t = q[i].top() - 1;
        q[i].pop();
        q[i].push(max(t, 0));
      }
    }
  }
  int sum = 0;
  for (int i = 0; i < 11; i++) {
    if (!q[i].empty()) {
      sum += q[i].top();
    }
  }
  cout << sum;
}