// 2024년 6월 7일 23:23:28
// 틀렸습니다
// KB
// ms
#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<pair<int, int>> v(n);
  vector<int> c(k);
  priority_queue<int> q;
  for (int i = 0; i < n; i++) {
    cin >> v[i].first >> v[i].second;
  }
  for (int i = 0; i < k; i++) {
    cin >> c[i];
  }
  sort(v.begin(), v.end());
  sort(c.begin(), c.end());
  auto it = v.begin();
  int sum = 0;
  for (auto e : c) {
    while (it != v.end() && (*it).first < e) {
      q.push((*it).second);
      it++;
    }
    if (!q.empty()) {
      sum += q.top();
      q.pop();
    }
  }
  cout << sum;
}