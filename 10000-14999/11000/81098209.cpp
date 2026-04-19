// 2024년 7월 15일 23:44:31
// 맞았습니다!!
// 4484KB
// 48ms
#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;
  priority_queue<int, vector<int>, greater<int>> q;
  vector<pair<int, int>> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i].first >> v[i].second;
  }
  sort(v.begin(), v.end());
  for (auto e : v) {
    if (q.empty()) {
      q.push(e.second);
      continue;
    }
    auto t = q.top();
    if (e.first >= t) {
      q.pop();
    }
    q.push(e.second);
  }
  cout << q.size();
}